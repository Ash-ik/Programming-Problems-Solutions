#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define MAX 1000009
bool isprime[MAX];
int digitprime[MAX]={};
int sumdigit(int z)
{
    if(z<10)
        return z;
    return z%10+sumdigit(z/10);
}
int main()
{
    int i,root,j,m,n,t;
    isprime[2]=true;
    root=sqrt(MAX) + 1;
    for(i=3;i<MAX;i+=2) isprime[i] = true;
    for(i=3;i<root;i+=2)
        if(isprime[i])
            for(j=i*i;j<MAX; j+=2*i)
                isprime[j] = false;
    for(i=1;i<MAX-8;i++)
    {
        int ans=0;
        if(isprime[i] &&isprime[sumdigit(i)])
            ans=1;
        digitprime[i]=digitprime[i-1]+ans;
    }
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&m,&n);
        printf("%d\n",digitprime[n]-digitprime[m-1]);
    }
    return 0;
}
