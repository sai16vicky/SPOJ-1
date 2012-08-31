/* spoj 10286. DOTA HEROES */

#include <stdio.h>
int arr[501];
int main(){
    int ct;
    int n, tower, d;
    int i;
    scanf("%d", &ct);
    while(ct--){
        scanf("%d %d %d", &n, &tower, &d);
        i = 0;
        for(i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        i = 0;
        while(i < n){
            if(arr[i] <= d)
                i++;
            else{
                tower--;
                if(tower == 0)
                    break;
                arr[i] -= d;
                if(arr[i] <= d)
                    i++;
            }
        }
        if(i < n) puts("YES");
        else puts("NO");
    }
    return 0;
}
