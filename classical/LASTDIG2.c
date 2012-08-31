/* 5699. The last digit re-visited */
#include <stdio.h>
#include <string.h>
#define P(x) printf("%d\n", (x))
int a2[4]={6,2,4,8},a3[4]={1,3,9,7},a7[4]={1,7,9,3},a8[4]={6,8,4,2},a4[2]={6,4},a9[2]={1,9};
int m(char*s){int ans=0;while(*s!='\0')ans = (ans * 10 + *s++ - '0') % 4;return ans;}
int main(){
int ct,la,lb;char a[1001],b[20];
scanf("%d",&ct);
while(ct--){
scanf("%s %s",a,b);lb=strlen(b);
if(lb==1&&b[0]=='0'){puts("1");continue;}
la=a[strlen(a)-1]-'0';
lb=b[lb-1]-'0';
lb=lb%2?1:0;
switch(la){
case 0:case 1:case 5:case 6:P(la);break;
case 2:P(a2[m(b)]);break;
case 3:P(a3[m(b)]);break;
case 7:P(a7[m(b)]);break;
case 8:P(a8[m(b)]);break;
case 4:P(a4[lb]);break;
case 9:P(a9[lb]);break;}
}return 0;}
