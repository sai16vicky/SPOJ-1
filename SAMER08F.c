/* spoj 3410. Feynman */  
#include <stdio.h>
int sq(int n);
int main(){
    int i = 0;
    while(1){
    	scanf("%d", &i);
	if(i == 0)
	    break;
	printf("%d\n", sq(i));
    }
    return 0;
}
int sq(int n){
    return n * (n + 1) * (2 * n + 1) / 6;
}
