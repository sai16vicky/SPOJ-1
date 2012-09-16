/* spoj 11373. Coke madness */

#include <stdio.h>
#include <string.h>
typedef long long in;
in arr[1000000];
int main(){
    int ct;
    in n;
    in i;
    in se = 1;
    in life, ans;
    int flag;
    scanf("%d", &ct);
    while(ct--){
        life = 0;
        ans = 0;
        flag = 0;
        scanf("%lld", &n);
        for(i = 0; i < n; i++)
            scanf("%lld", &arr[i]);
        for(i = 0; i < n; i++){
            ans += arr[i];
            if(ans <= 0){
                life += 1 - ans;
                ans = 1;
                flag = 1;
            }
        }
        if(flag == 0)
            printf("Scenario #%lld: 1\n", se);
        else
            printf("Scenario #%lld: %lld\n", se, life);
        se += 1;
    }
    return 0;
}
