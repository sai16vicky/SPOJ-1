/* spoj 4141. Euler Totient Function */

#include <stdio.h>
#include <math.h>

long euler(long n){
    long i, ans;
    ans = n;
    for (i = 2; i < (int)sqrt(n + 0.0) + 1; i++)
        if(n % i == 0) {
            ans = ans / i * (i - 1);
            while (n % i == 0) 
                n /= i; 
        }
    if (n > 1) 
        ans = ans / n * (n - 1);
    return ans;
}


int main(){
    int ct;
    long n;
    scanf("%d", &ct);
    while(ct--){
        scanf("%ld", &n);
        printf("%ld\n", euler(n));
    }
    return 0;
}
