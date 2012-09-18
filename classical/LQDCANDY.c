/* spoj 8995. CANDY */

#include <stdio.h>
#include <math.h>
#define Debug(x) printf("%lf\n", x)
typedef long long ll;
int main(int argc, char *argv[]){
    int ct;
    ll n;
    double st, tmp;
    ll all, t;
    ll ans, count;
    scanf("%d", &ct);
    while(ct--){
        scanf("%lld", &n);
        st = log2(n);
        tmp = ceil(st);
        if(fabs(st - tmp) < 0.000001){
            printf("%.lf 0\n", pow(2, tmp));
        }else{
            t = all = (ll)pow(2, tmp);
            ans = count = 0;
            while(ans != n){
                t /= 2;
                ans += t;
                if(ans > n)
                    ans -= t;
                count += 1;
            }
            printf("%lld %lld\n", all, count);
        }
    }
    return 0;
}
