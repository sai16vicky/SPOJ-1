/* spoj 11063. AP - Complete The Series (Easy) */
#include <stdio.h>
int main(){
    int ct;
    int i;
    long long a, b, s;
    long long n, d, base;
    scanf("%d", &ct);
    while(ct--){
        scanf("%lld %lld %lld", &a, &b, &s);
        n = s * 2 / (a + b);
        d = (b - a) / (n - 5);
        printf ("%lld\n", n);
        base = a - 2 * d;
        for(i = 0; i < n; i++){
            printf ("%lld ", base + i * d);
        }
        putchar('\n');
    }
    return 0;
}
