#include<stdio.h>
#include<stdbool.h>
int abs(int a)
{
    if(a<0) return -a;
    return a;
}
int main()
{
    int t;
    while(scanf("%d",&t)==1)
    {
        int a[3010]={},p,q,i;
        bool jolly=true;
        for(i=0;i<t;i++)
            {
                scanf("%d",&p);
                if(i==0)
                    q=p;
                else
                {
                    int x=abs(p-q);
                    q=p;
                    if(x>t-1 ||++a[x]>1 ||x==0)
                        jolly=false;
                }
            }
            if(jolly)
               printf("Jolly\n");
            else printf("Not jolly\n");
    }
    return 0;
}

