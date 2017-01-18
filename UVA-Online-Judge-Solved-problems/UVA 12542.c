#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define MAX 100000
bool isPrime[MAX];
char prime[9592][6],in[256];
void sieveString()
{
    isPrime[2]=true;
    int i,root,j,n;
    root=sqrt(MAX) + 1;
    for(i=3; i<MAX; i+=2) isPrime[i] = true;
    for(i=3; i<root; i+=2)
    {
        if(isPrime[i])
        {
            for(j=i*i; j<MAX; j+=2*i)
            {
                isPrime[j] = false;
            }
        }
    }
    int cnt=0;
    for(i=2; i<=MAX; i++)
    {
        if(isPrime[i])
            sprintf(prime[cnt++],"%d",i);
    }
}

bool match(int start,int ends,int primeIndex)
{
    int i,j=0;
    for(i=start; i<ends; i++)
        if(prime[primeIndex][j++]!=in[i]) return false;
    return true;
}

int main()
{
    sieveString();
    int i,j,len,subLen,found;
    while(gets(in) && strcmp(in,"0"))
    {
        found=1;
        len=strlen(in);
        for(i=9591; i>=0 && found; i--)
        {
            subLen=strlen(prime[i]);
            for(j=0; j<=len-subLen && found; j++)
            {
                if(match(j,j+subLen,i))
                {
                    puts(prime[i]);
                    found=0;
                    break;
                }
            }
        }
    }
    return 0;
}
