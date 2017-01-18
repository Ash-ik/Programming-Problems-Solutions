#include<stdio.h>
int gcd(int a,int b)
{
if(b==0)
return a;
return gcd(b,a%b);
}
int multipleGCD(int a[],int b)
{
    int i=0,ans=a[0];
    while(++i<b)
        ans=gcd(ans,a[i]);
    return ans;
}
int main(){
    int a,b,c[4]={701,1059,1417,2312};
    b=c[0];
    for(a=1;a<4;a++)
        b=gcd(b,c[a]);
    printf("%d\n",b);
    return 0;
}

