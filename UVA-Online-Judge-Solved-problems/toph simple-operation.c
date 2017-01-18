#include<stdio.h>
int main(){int a,b,t,cases=0;char c;scanf("%d",&t);while(t--){scanf("%d %c %d",&a,&c,&b),printf("Case %d: %d\n",++cases,c=='*'?a*b:c=='+'?a+b:a-b);}return 0;}

