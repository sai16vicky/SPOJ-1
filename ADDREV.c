/* spoj 42. Adding Reversed Numbers */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 1000
#define ITOA(x) (x) - '0'
void stradd(char const *a, char const *b);
int main(){
    int ct = 0;
    scanf("%d", &ct);
    char a[SIZE];
    char b[SIZE];
    while (ct--){
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        scanf("%s %s", a, b);
        stradd(a, b);
    }
    return 0;
}
void stradd(char const *a, char const *b){
    int flag = 0;
    int tmpstr[SIZE];
    int sum = 0;
    int i = 0;
    memset(tmpstr, 0, sizeof(tmpstr));
    while (*a && *b){
        sum = ITOA(*a++) + ITOA(*b++) + flag;
        if (sum >= 10){
            flag = 1;
            tmpstr[i++] = sum % 10;
        }else{
            flag = 0;
            tmpstr[i++] = sum;
        }
    }
    while(*a){
        sum = ITOA(*a++) + flag;
        if (sum >= 10){
            flag = 1;
            tmpstr[i++] = sum % 10;
        }else{
            flag = 0;
            tmpstr[i++] = sum;
        }
    }
    while(*b){
        sum = ITOA(*b++) + flag;
        if (sum >= 10){
            flag = 1;
            tmpstr[i++] = sum % 10;
        }else{
            flag = 0;
            tmpstr[i++] = sum;
        }
    }
    if(flag == 1){
        tmpstr[i++] = 1;
    }
    tmpstr[i] = -1;
    i = 0;
    while(tmpstr[i] == 0){
        i++;
    }
    for(i; tmpstr[i] != -1; i++)
        printf ("%d", tmpstr[i]);
    printf("\n");
}
