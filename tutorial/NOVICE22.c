#include <stdio.h>
#include <string.h>
char arr[200000];
char ascii[300];
int main(){
    int ct;
    int i;
    int ans;
    scanf("%d", &ct);
    while(ct--){
        ans = 0;
        memset(ascii, 0, sizeof(ascii));
        scanf("%s", arr);
        for(i = 0; arr[i] != '\0'; i++){
            ascii[arr[i]] += 1;
        }
        for(i = 0; i < 300; i++){
            if(ascii[i] != 0){
                ans += 1;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}
