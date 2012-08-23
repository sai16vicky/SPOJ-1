/* spoj 78. Marbles */
#include <stdio.h>
#define PRINT(x) printf("%lld\n", (x))
typedef long long lint;
lint fct(lint n, lint k);
int main(){
    int ct;
    scanf("%d", &ct);
    lint n, k;
    while(ct--){
        scanf("%lld %lld", &n, &k);
        PRINT(fct(n, k));
    }
    return 0;
}

lint fct(lint n, lint k){
    lint ans = 1;
    lint i;
    lint j = 1;
    for(i = k; i < n; i++){
        ans *= i;
        ans /= j;
        if(j > n - k){
            j = 1;
        }else{
            j += 1;
        }
    }
    return ans;
}
