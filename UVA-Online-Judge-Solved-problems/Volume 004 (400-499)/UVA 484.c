#include<stdio.h>
#define max 100000
int main()
{
long ltr[max]={},i,hold[max]={},x[max]={},p=0;
    while(scanf("%ld",&x[p])!=EOF)
        ++ltr[x[p++]];
            for(i=0;i<p;i++)
            {
                if(!hold[x[i]])
                    {
                        hold[x[i]]=1;
                        printf("%ld %ld\n",x[i],ltr[x[i]]);
                    }
            }
return 0;
}
