#include<stdio.h>
#include<math.h>
#define MAX 10000
int ans[MAX+1]={};
void generate()
{
    int isPrime[MAX]={};
    int prime[MAX];
    int i,j,n,p,x,y;
    n=-1;
    for(i=2;i<MAX;i++)
    {
        if(!isPrime[i])
        {
            prime[++n]=i;
            for(j=2;i*j<MAX; j++)
                isPrime[i*j]=1;
        }
    }
    for(x=0;x<=n;x++)
        {
            p=0;
        for(y=x;y<=n;y++)
    {
        p+=prime[y];
        if(p>MAX)
            break;
        ++ans[p];
    }
        }
}
int main()
{
    int d;
    generate();
    while(scanf("%d",&d)!=EOF &&d)
    printf("%d\n",ans[d]);
    return 0;
}
