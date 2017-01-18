#include<stdio.h>
 int main()
 {
 long long int n,a[100000],i,j;
 while(scanf("%lld",&n)!=EOF)
 {
 if(n<0)
 break;
 if(n==0)
 printf("0\n");
 else
 {
 for(i=0;n>0;i++)
 {
 a[i]=n%3;
 n=n/3;
 }
 for(j=i-1;j>=0;j--)
 {
printf("%lld",a[j]);
 }
 printf("\n");
 }
 }
 return 0;
 }
