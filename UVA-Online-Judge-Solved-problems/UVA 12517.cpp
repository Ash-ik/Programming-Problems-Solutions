#include<stdio.h>
#include<map>
using namespace std;
map<unsigned long long int,unsigned long long int>ans;
int digitsum(int z)
{
    if(z<10) return z;
    return z%10+digitsum(z/10);
}
int main()
{
    ans[0]=0;
    unsigned long long i,j,p,q,x;
    for(i=1;i<=10000;i++)
        ans[i]=ans[i-1]+digitsum(i);
    while(scanf("%llu %llu",&p,&q)==2)
        {
            x=0;
            for(i=p;i<=q;i++)
                x+=digitsum(i);
            printf("%llu\n",x);
        }
    return 0;
}
