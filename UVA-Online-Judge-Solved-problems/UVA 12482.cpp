#include<stdio.h>
#include<string.h>
int main()
{
    char a[100000];
    long long x[10000],N,L,C,line,page,sum,i,p;
    while(scanf("%lld %lld %lld",&N,&L,&C)==3)
    {
        sum=0,page=1,line=1;
        for(p=0;p<N;p++)
        {
            scanf("%s",a);
            i=strlen(a);
            if(i+sum>C)
            {
                line++;
                sum=0;
                if(line>L) {line=1;page++;}
            }
            sum+=i+1;
        }
        printf("%lld\n",page);
    }
    return 0;
}
