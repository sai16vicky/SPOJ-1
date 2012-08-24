/* spoj 7718. Number of common divisors */
#include <stdio.h>
#define PRINT(x) printf("%d\n", (x))
int div(int n);
int gcd(int a, int b);
int main(){
    int ct;
    scanf("%d", &ct);
    int a, b;
    while(ct--){
        scanf("%d%d", &a, &b);
        a = gcd(a, b);
        PRINT(div(a));
    }
    return 0;
}
int gcd(int a, int b){
    if (a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}
int div(int n){
    int ans = 1;
    int k = 2;
    int m = 1;
    while(k <= n){
        if(n % k == 0){
            m += 1;
            n /= k;
        }else{
            ans *= m;
            m = 1;
            k += 1;
        }
    }
    return ans * m;
}
