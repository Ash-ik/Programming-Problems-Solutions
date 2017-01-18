#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    long long a,b,i,n[100000],flag,temp,d=1,p;
    while(scanf("%lld %lld",&a,&b)==2 &&(a+b))
    {
        for(i=0;i<a;i++) scanf("%lld",&n[i]);
        sort(n,n+a);
        for(i=0;i<b;i++)
        {
            flag=0;
            scanf("%lld",&temp);
            if(i==0)
            printf("CASE# %lld:\n",d++);
            for(p=0;p<a;p++)
            if(n[p]==temp) {flag=1;printf("%lld found at %lld\n",temp,p+1);break;}
            if(flag!=1) printf("%lld not found\n",temp);
        }
    }
    return 0;
}
