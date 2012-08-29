/* spoj 4300. Rectangles */

#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);
    long out = 0;
    int i;
    int tmp;
    int end = n / 2;
    for(i = 2; i <= end; i++){
        tmp = n / i - i + 1;
        if(tmp > 0)
            out += tmp;
    }
    printf("%ld\n", out + n);
    return 0;
}
