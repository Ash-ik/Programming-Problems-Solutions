#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<map>
using namespace std;
map<long long, long long>fact;
char a[10000],c;
long long factorial[21]={1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600,6227020800,87178291200,1307674368000,20922789888000,355687428096000,6402373705728000,121645100408832000,2432902008176640000};
int main()
{
    long long f,t,temp,p,i,ans,x,j;
    for(i=0;i<=20;i++)
    fact[i]=factorial[i];
    scanf("%lld",&t);
    for(p=1;p<=t;p++)
    {
        long long count[200]={};
        ans=1;
        scanf("%s",a);
        x=strlen(a);
        for(i=0;i<x;i++)
            count[a[i]-'A']++;
            for(j=0;j<=26;j++)
            ans=ans*fact[count[j]];
        printf("Data set %lld: %lld\n",p,fact[x]/ans);
    }
    return 0;
}
