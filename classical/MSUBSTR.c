/* spoj 12262. Mirror Strings !!! */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 3000
#define N2 6003

void mirror(char *arr, int *p, int n);
int min(int a, int b);

int main(){
    int ct, i, j;
    scanf("%d", &ct);
    char *arr = (char *)malloc(N);
    int *p = (int *)malloc(sizeof(int) * N2);
    int la, lb, max, count;
    char *str = (char *)malloc(N2);
    while(ct--){
        memset(p, 0, sizeof(int) * N2);
        max = count = 0;
        scanf("%s", arr);
        la = strlen(arr);
        lb = la * 2 + 2;
        str[0] = '$';
        str[1] = '#';
        for(i = 0, j = 2; i < la; i++){
            str[j++] = arr[i];
            str[j++] = '#'; 
        }
        str[j] = '\0';
        mirror(str, p, lb);
        for(i = 0; i < lb; i++){
            p[i] -= 1;
            if(max < p[i]){
                max = p[i];
                count = 1;
            }else if(max == p[i]){
                count += 1;
            }
        }
        printf("%d %d\n", max, count);
    }
    return 0;
}

void mirror(char *arr, int *p, int n){
    int i;
    int max = 0;
    int id = 0;
    for(i = 1; i < n; i++){
        if(max > i)
            p[i] = min(p[2 * id - i], max - i);        
        else
            p[i] = 1;
        for(; arr[i + p[i]] == arr[i - p[i]]; p[i]++)
            ;
        if(p[i] + i > max){
            max = p[i] + i;
            id = i;
        }
    }
}

int min(int a, int b){
    return a < b ? a : b;
}
