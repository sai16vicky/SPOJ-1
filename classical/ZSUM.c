/* spoj 9494. Just Add It */

#include <stdio.h>
#define MOD 10000007
typedef long long in;

in powmod(in a, in b){
    in c = 1;
    while(b > 0){
        if(b % 2 != 0){
            c = (c * a) % MOD;
        }
        b >>= 1;
        a = (a * a) % MOD;
    }
    return c;
}
int main(){
    in n;
    in k;
    in a;
    in b;
    scanf("%lld %lld", &n, &k);
    while(n != 0 || k != 0){
        a = (powmod(n, k) + powmod(n, n)) % MOD;
        b = (2 * powmod(n - 1, k) + 2 * powmod(n - 1, n - 1)) % MOD;
        printf("%lld\n", (a + b) % MOD);
        scanf("%lld %lld", &n, &k);
    }
    return 0;
}
