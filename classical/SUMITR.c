/* 237. spoj Sums in a Triangle */
int t[110][110];
main(){int c,n,i,j,m,*a,*b;scanf("%d",&c);while(c--){scanf("%d",&n);m=0;i=j=1;while(i<=n){b=(a=t[i]+j)-111;scanf("%d",a);*a+=(*b>b[1])?*b:b[1];if(*a>m)m=*a;if(++j>i){j=1;i++;}}printf("%d\n",m);}return 0;}
