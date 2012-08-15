/* spoj 74. Divisor Summation */
#include <stdio.h>
#include <string.h>
#define M 500000
int main(){
    int arr[M + 1];
    memset(arr, 0, sizeof(int) * (M + 1));
    int i, j;
    for(i = 2; i <= M; i++){
        for(j = i * 2; j <= M; j += i){
            arr[j] += i;
        }
    }
    int ct = 0;
    int test = 0;
    scanf("%d", &ct);
    while(ct--){
        scanf("%d", &test);
        if(test == 1)
            printf("0\n");
        else
            printf("%d\n", arr[test] + 1);
    }
    return 0;
}
