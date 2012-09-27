/* spoj 11560. A Summatory */

#include <stdio.h>

#define MOD 1000000003
#define N 1000001

typedef long long ll;
ll cube(ll n){
    ll a = n % MOD;
    ll b = (n + 1) % MOD;
    if(b % 2 == 0)
        b /= 2;
    else
        a /= 2;
    a = a * b % MOD;
    a *= a;
    return a % MOD;   
}


ll arr[N];

int main(){
    ll i;
    for(i = 1; i < N; i++){
        arr[i] = cube(i);
        arr[i] += arr[i-1];
        arr[i] %= MOD;
    }
    int ct;
    scanf("%d", &ct);
    ll n;
    while(ct--){
        scanf("%lld", &n);
        printf("%lld\n", arr[n]);
    }
    return 0;
}
