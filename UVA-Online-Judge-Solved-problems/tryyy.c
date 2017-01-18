#include<stdio.h>
 int fun1(int);
 int fun2(int);
 int main()
 {
 int n,res1,res2,i,t;
 scanf("%d",&t);
 for(i=1;i<=t;i++){
 scanf("%d",&n);
 res1=fun1(n);
 res2=fun2(res1);
 int count=1;
 while(res1!=res2)
 {
 res1=fun1(res2);
 res2=fun2(res1);
 count++;
 }
 printf("%d %d\n",count,res2);
 }
 return 0;
 }
 int fun1(int n)
 {
 int rev=0,r,p,sum;
 p=n;
 while(n!=0)
 {
 rev=rev*10;
 rev=rev+n%10;
 n=n/10;
 }
 r=rev;
 sum=p+r;
 return(sum);
 }
 int fun2(int k)
 {
 int res=0;
 while(k!=0)
 {
 res=res*10;
 res=res+k%10;
 k=k/10;
 }
 return res;
 }
