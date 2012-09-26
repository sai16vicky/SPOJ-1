/* spoj 12281. Word or number (Easiest) */

#include <stdio.h>
#include <string.h>

int main(){
    char arr[100000];
    scanf("%s", arr);
    int i = 0;
    for(i; i < strlen(arr); i++){
        if(arr[i] < '0' || arr[i] > '9'){
            puts("word");
            return 0;
        }
    }
    puts("number");
    return 0;
}
