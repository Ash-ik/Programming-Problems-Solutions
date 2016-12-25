#include<stdio.h>
#include<string.h>
int josephus(int n,int k)
{
    if(n==1) return 0;
    return (josephus(n-1,k)+k)%n;
}
int main()
{
    int i,t,n,k;
    char in[50],*intVal;
    scanf("%d\n",&t);
    for(i=1;i<=t;i++)
    {
        gets(in);
        intVal=strtok(in," ");
        n=atoi(intVal);
        intVal=strtok(NULL," ");
        k=atoi(intVal);

        printf("Case %d: %d\n",i,josephus(n,k)+1);
    }
    return 0;
}
