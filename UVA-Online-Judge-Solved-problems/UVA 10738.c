#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define MAX 1000001


struct st
{
    int M,mu;
}st[MAX];

bool isPrime[MAX];
int primes[78498];



void solve()
{
    isPrime[2]=true;
    int i,j,n;
    for(i=3;i<MAX;i+=2) isPrime[i]=true;
    for(i=3;i<1001;i+=2)
    {
        if(isPrime[i])
        {
            for(j=i*i;j<MAX; j+=2*i)
            {
                isPrime[j] = false;
            }
        }
    }
    for(i=2,j=0;i<MAX;i++)
        if(isPrime[i])
            primes[j++]=i;




st[1].mu=1;
    st[1].M=1;
    for(i=2;i<MAX;i++)
    {
        int len=(int)sqrt(i);
        if(isPrime[i])
            {
                st[i].mu=-1,st[i].M=(st[i-1].M)-1;
            }
        else
        {
            int temp=i,square=0,j=0,count_factor=0;

        while(primes[j]<=len)
        {
            while(temp%primes[j]==0)
            {
                temp=temp/primes[j];
                count_factor=count_factor+1;
                square=square+1;
            }
            if(square>1)
                {
                    st[i].mu=0,st[i].M=st[i-1].M;
                        break;
                }
                square=0;
                j=j+1;
        }
        if(temp>1) count_factor++;
        if(square<2)
        {
           if(count_factor%2==0) st[i].mu=1,st[i].M=st[i-1].M+1;
            else st[i].mu=-1,st[i].M=st[i-1].M-1;
        }

        }
    }




}



int main()
{
    solve();


    int n;
    while(scanf("%d",&n))
    {
        if(!n) return 0;
        printf("%8d%8d%8d\n",n,st[n].mu,st[n].M);
    }
    return 0;
}
