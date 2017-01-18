#include<stdio.h>
int main()
{
int t,t1,t2,f,a,i,res,CT1,CT2,CT3;
while(scanf("%d",&t)==1)
{
for(i=1;i<=t;i++)
{
    res=0;
scanf("%d%d%d%d%d%d%d",&t1,&t2,&f,&a,&CT1,&CT2,&CT3);
if(CT1<=CT2 && CT1<=CT3)
res+=(CT2+CT3)/2;
else if(CT2<=CT1 && CT2<=CT3)
res+=(CT1+CT3)/2;
else if(CT3<=CT1 && CT3<=CT2)
res+=(CT1+CT2)/2;
res+=t1+t2+f+a;
if(res>=90)
printf("Case %d: A\n",i);
else if(res>=80)
printf("Case %d: B\n",i);
else if(res>=70)
printf("Case %d: C\n",i);
else if(res>=60)
printf("Case %d: D\n",i);
else if(res<60)
printf("Case %d: F\n",i);
}
}
return 0;
}
