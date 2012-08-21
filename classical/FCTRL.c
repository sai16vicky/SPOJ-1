/* spoj 11. Factorial */
#include <stdio.h>
int main(){
    int ct;
    scanf("%d", &ct);
    long long n;
    long long sum = 0;
    while(ct--){
        sum = 0;
        scanf("%lld", &n);
        while (n > 0){
            sum += n / 5;
            n /= 5;
        }
        printf("%lld\n", sum);
    }
    return 0;
}
