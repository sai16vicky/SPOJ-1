/* spoj 5. The Next Palindrome */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 1000000
void nxt(char *arr, char *dst);
void strrev(char *arr, char *dst);
void stradd(char *arr);
int main(){
#if 1
    int ct;
    char arr[SIZE];
    char dst[SIZE];
    scanf("%d", &ct);
    while(ct--){
        memset(arr, 0, sizeof(arr));
        memset(dst, 0, sizeof(dst));
        scanf("%s", arr);
        if(strcmp(arr, "9") == 0)
            strcpy(dst, "11");
        else
            nxt(arr, dst);
        puts(dst);
    }
#endif
    return 0;
}

void nxt(char *arr, char *dst){
    char *a = (char *)malloc(sizeof(char) * SIZE);
    char *b = (char *)malloc(sizeof(char) * SIZE);
    char *tmp = (char *)malloc(sizeof(char) * SIZE);
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    memset(tmp, 0, sizeof(tmp));
    int len_arr = strlen(arr);
    int pos = len_arr / 2;
    int x = 0;
    int t = 0;
    if(len_arr % 2 == 0){
        strncpy(a, arr, pos);
        strcpy(b, arr + pos);
        strrev(a, tmp);
        if(strcmp(tmp, b) > 0){
            strcpy(dst, a);
            strcat(dst, tmp);
        }else{
            x = strlen(a);
            stradd(a);
            if(x == strlen(a)){
                strrev(a, tmp);
                strcpy(dst, a);
                strcat(dst, tmp);
            }else{
                strrev(a, tmp);
                strcpy(dst, a);
                strcat(dst, tmp + 1);
            }
        }
    }else{
        strncpy(a, arr, pos + 1);
        strcpy(b, arr + pos);
        strrev(a, tmp);
        if(strcmp(tmp, b) > 0){
            strcpy(dst, a);
            strcat(dst, tmp + 1);
        }else{
            x = strlen(a);
            stradd(a);
            if(x == strlen(a)){
                strrev(a, tmp);
                strcpy(dst, a);
                strcat(dst, tmp + 1);
            }else{
                strrev(a, tmp);
                strcpy(dst, a);
                strcat(dst, tmp + 2);
            } 
        }
    }
    free(a);
    free(b);
    free(tmp);
}

void strrev(char *arr, char *dst){
    int j = strlen(arr) - 1;
    int i = 0;
    while(j >= 0){
        dst[i++] = arr[j--];
    }
    dst[i] = '\0';
}

void stradd(char *arr){
    int *tmp = (int *)malloc(sizeof(int) * SIZE);
    memset(tmp, 0, sizeof(int) * SIZE);
    int flag = 1;
    int j = strlen(arr) - 1;
    int i = 0;
    while(j >= 0){
        tmp[i] = arr[j] -'0' + flag;
        if(tmp[i] > 9){
            tmp[i + 1] = tmp[i] / 10;
            tmp[i] %= 10;
            flag = 1;
        }else{
            flag = 0;
        }
        i++;
        j--;
    }
    if(tmp[i] == 0)
        i--;
    j = 0;
    while(i >= 0){
        arr[j] = tmp[i] +'0';
        j++; i--;
    }
    arr[j] = '\0';
    free(tmp);
}
