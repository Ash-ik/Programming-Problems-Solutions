#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{

    long long ans[100000],t,c,r,temp,z,i=1,x,p;
    scanf("%lld",&t);
    while(i<=t)
    {
    scanf("%lld %lld",&c,&r);
    printf("Case #%lld:",i++);
    temp=c-r;
    if(temp==0) printf(" 0\n");
    else
    {
        z=0;
        p=sqrt(temp);
        for(x=1;x<=p;x++)
        if(temp%x==0)
        {
            if(x>r)
            ans[z++]=x;
            if((temp/x)>r)
            ans[z++]=temp/x;
        }
        sort(ans,ans+z);
        ans[z]='\0';
        for(x=0;x<z;x++)
        if(ans[x]!=ans[x+1])
        printf(" %lld",ans[x]);
        printf("\n");
    }
    }
    return 0;
}
