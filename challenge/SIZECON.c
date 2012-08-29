#include<stdio.h>
main(){
    int a, b, c = 0;
    scanf("%d",&a);
    while(a--){
    scanf("%d", &b);
    if(b > 0) c += b;
    }
    printf("%d\n", c);
    return 0;
}
