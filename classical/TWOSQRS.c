/* spoj 91. Two squares or not two squares */
#include <stdio.h>
#include <math.h>
typedef long long in;
in arr[1000011];

int main(){
    in i;
    for(i = 0; i <= 1000000; i++)
        arr[i] = i * i;
    int ct;
    in n;
    in a, b;
    scanf("%d", &ct);
    while(ct--){
        scanf("%lld", &n);
        b = (in)(sqrt((double)n) + 0.5);
        a = 0;
        while(a <= b)
            if(arr[a] + arr[b] == n){
                puts("Yes");
                break;
            }else if(arr[a] + arr[b] > n){
                b--;
            }else{
                a++;
            }
        if(a > b)
            puts("No");
    }
    return 0;
}
