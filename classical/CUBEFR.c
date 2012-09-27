/* spoj 9032. Cube Free Numbers */

#include <stdio.h>
#define N 1000002
int arr[N];
int brr[N];
int main(){
    int i, j, cube;
    for(i = 2; i <= 100; i++ ){
        cube = i * i * i;
        for(j = cube; j < N; j += cube)
            arr[j] = 1;
    }
    j = 1;
    int pos = 1;
    for(i = 1; i < N; i++){
        if(!arr[i]){
            brr[j] = pos;
            j++;
            pos++;
        }
        else{
            j++;
        }
    }
    int ct;
    int se = 1;
    int n;
    scanf("%d", &ct);
    while(ct--){
        scanf("%d", &n);
        if(arr[n] == 1){
            printf("Case %d: Not Cube Free\n", se);
        }else{
            printf("Case %d: %d\n", se, brr[n]);
        }
        se++;
    }
    return 0;
}
