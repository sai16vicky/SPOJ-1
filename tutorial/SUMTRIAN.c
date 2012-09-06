/* spoj 453. Sums in a Triangle (tutorial) */

#include <stdio.h>
#define S scanf("%d",
int a[100][100];
int main(){
    int c,n,i,j,m;S,&c);
    while(c--){
        S,&n);
        for(i=0;i<n;i++)
            for(j=0;j<=i;j++){
                S,&a[i][j]);
                if(!i){m=a[i][j];break;}
                if(!j)a[i][j]+=a[i-1][j];
                else if(j==i)a[i][j]+=a[i-1][j-1];
                else a[i][j]+=a[i-1][j-1]>a[i-1][j]?a[i-1][j-1]:a[i-1][j];
                if(a[i][j]>m)m=a[i][j];}
                printf("%d\n",m);
    }
    return 0;
}
