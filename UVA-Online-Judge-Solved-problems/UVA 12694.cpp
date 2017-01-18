#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int compare( const void *a,const void *b)
{
    return (*(int*)a-*(int*)b);
}
int main()
{
    //freopen("dataN.txt","r",stdin);
    int sum,b,t,a,i,ans,dif[10000];
    scanf("%d",&t);
    while(t--)
    {
        i=0;
        while(scanf("%d %d",&a,&b)==2 &&(a+b))
            dif[i++]=b-a;
        qsort(dif,i,sizeof(int),compare);
        i=0;
        ans=0,sum=0;
        for(i=0;dif[i]!='\0';i++)
        {
            if(dif[i]+sum<=10)
            {
                sum+=dif[i]+1;
                ans++;
            }
            else break;
        }
        printf("%d\n",ans);
    }
    return 0;
}
