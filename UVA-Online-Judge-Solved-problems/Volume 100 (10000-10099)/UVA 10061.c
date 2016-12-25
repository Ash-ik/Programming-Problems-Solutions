#include <stdio.h>
#include<math.h>
#include<stdbool.h>
#define db double
#define pf printf
#define sf(x,y) scanf("%d %d",&x,&y)
#define MAX 1048578
#define PrimeCount 82026
#define read freopen("dataN.txt","r",stdin)

bool p[MAX+2];
int prime[PrimeCount];
int mini(int a,int b)
{
    if(a<b) return a;
    return b;
}
int trail_zero(int n,int b)
{
    int ans=n;
    int root=sqrt(b);
    int k=b,c,sum,i;
    for(i=0; i<=root; i++)
    {
        if(k%prime[i]==0)
        {
            c=0;
            while(k%prime[i]==0)
            {
                k/=prime[i];
                c++;
            }
            root=sqrt(k);

            sum=0;
            int m=n;
            while(m!=0)
            {
                sum+=m/prime[i];
                m=m/prime[i];
            }
            ans=mini(ans,sum/c);
        }
    }

    if(k>1)
    {
        sum=0;
        int m=n;
        while(m!=0)
        {
            sum+=m/k;
            m=m/k;
        }
        ans=mini(ans,sum);
    }
    return ans;
}

db dp[MAX+2];

void count_digit()
{
    dp[1]=0;
    int i;
    for(i=2; i<=MAX; i++)
    {
        dp[i]=dp[i-1]+log10(i);
    }
}
void sieve()
{
    p[0]=p[1]=1;
    int i,j,root=sqrt(MAX);
    for(i=2; i<=root; i++)
    {
        if(p[i]==0)
        {
            for(j=i*i; j<=MAX; j+=i)
            {
                p[j]=1;
                if(i%2==1) j+=i;
            }
        }
    }
    int cnt=0;
    for(i=2; i<=MAX; i++)
    {
        if(!p[i]) prime[cnt++]=i;
    }
}
int main()
{
    sieve();
    count_digit();
    int n,b;
    db digit;
    while(sf(n,b)!=EOF)
    {
        digit=floor(dp[n]/log10(b)+1);
        pf("%d %.0f\n",trail_zero(n,b),digit);

    }
    return 0;
}
