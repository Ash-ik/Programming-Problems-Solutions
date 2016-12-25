#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define MAX 31623
bool isPrime[MAX];
int primes[3405];

int digit_sum(int x)
{
    if(x<10) return x;
    return x%10+digit_sum(x/10);
}

void solve()
{
    isPrime[2]=true;
    int i,j,n;
    for(i=3;i<MAX;i+=2) isPrime[i]=true;
    for(i=3;i<179;i=i+2)
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
}

bool smith_number(int n)
{
    if(n<31623 && isPrime[n]) return false;

    int x=0,sumFactor=0,sumN=digit_sum(n),div,temp=n;

    while(x<3401 && n!=1)
    {
        div=primes[x];
        while(n%div==0 &&n!=1)
        {
            n=n/div;
            sumFactor=sumFactor+digit_sum(div);
        }
        x++;
    }
    if(temp==n) return false;

    if(n!=1)
        sumFactor=sumFactor+digit_sum(n);

    return sumFactor==sumN;

}
int main()
{
    char in[15];
    solve();
    int t,n;
    gets(in);
    t=atoi(in);
    while(t--)
    {
    gets(in);
    n=atoi(in);
        while(!smith_number(++n));
        printf("%d\n",n);
    }
    return 0;
}
