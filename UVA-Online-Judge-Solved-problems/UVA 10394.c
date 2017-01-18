#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define MAX 20000000
bool isPrime[MAX];
int ans[MAX];
int main()
{
    int i,root,j,n,x;
    root=sqrt(MAX)+1;
    for(i=3;i<MAX;i+=2) isPrime[i]=true;
    for(i=3;i<root;i+=2)
    {
        if(isPrime[i])
            for(j=i*i;j<MAX; j+=2*i)
                isPrime[j] = false;
    }
    x=0;
    for(i=3;i<MAX;i+=2)
        if(isPrime[i] &&isPrime[i+2])
        ans[++x]=i;
        while(scanf("%d",&n)==1)
            printf("(%d, %d)\n",ans[n],ans[n]+2);
        return 0;
}
