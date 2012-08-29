/* spoj 5681. Factorial length */

#include <stdio.h>
#include <math.h>
typedef long long lint;
int main(){
    lint ct,n;
    double P = acos(-1.0),E = exp(1.0);  
    scanf("%lld", &ct);
    while(ct--){
        scanf("%lld", &n);
        if(n == 1 || n == 0){
            puts("1");continue;
        }
        printf("%lld\n", (lint)(log10(sqrt(2*P*n))+n*log10(n/E)+1));
    }
    return 0;
}
