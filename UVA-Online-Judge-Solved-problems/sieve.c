#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define MAX 1000000000
bool isPrime[MAX];
int main()
{
    isPrime[2]=true;
    int i,root,j,n;
    root=sqrt(MAX) + 1;
    for(i=3;i<MAX;i+=2) isPrime[i] = true;
    for(i=3;i<root;i+=2)
    {
        if(isPrime[i])
        {
            for(j=i*i;j<MAX; j+=2*i)
            {
                isPrime[j] = false;
            }
        }
    }
    for(i=100;i<=200;i++)
//    while(scanf("%d",&n)==1)
    {
        printf("%d > ",i);
        if(isPrime[i])
            printf("prime\n");
        else printf("not prime\n");
    }
}
