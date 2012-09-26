#include <stdio.h>
typedef long long ll;
double e = 0.000000001;
int main(){
    ll a, b, c, k;
    int ct;
    scanf("%d", &ct);
    while(ct--){
        scanf("%lld %lld %lld %lld", &a, &b, &c, &k);
        if(b * b - 4 * a * (c - k) >= 0)
            puts("Yes");
        else
            puts("No");
    }
    return 0;
}
