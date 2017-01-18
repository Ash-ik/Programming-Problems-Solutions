#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>
#define MAX 2050
bool prime[MAX];
char a[MAX];
int ltr[260];
int main()
{
    int i,j,flag,t,root,n;
    prime[2]=true;
    root=sqrt(MAX)+1;
    for(i=3;i<MAX;i+=2) prime[i] = true;
    for(i=3;i<root;i+=2)
        if(prime[i])
            for(j=i*i;j<MAX; j+=2*i)
                prime[j] = false;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        flag=1;
        scanf("%s",a);
        for(j=0;j<strlen(a);j++)
            ++ltr[a[j]];
            printf("Case %d: ",i);
            for(j='0';j<='z';j++)
                if(prime[ltr[j]])
            {printf("%c",j);flag=0;}
            if(flag)
                printf("empty");
            printf("\n");
        for(j='0';j<='z';j++)
            ltr[j]=0;
    }
    return 0;
}
