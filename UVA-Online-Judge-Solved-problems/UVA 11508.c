#include<stdio.h>
#include<string.h>
#define max 100005
int main()
{
    while(1)
    {
        char x;
        long zeroElmnt,n,temp[max]={},p=0,ans[max]={},mx=0,cnt=0;
        memset(ans,-1,sizeof(ans));
        while(1)
        {
            scanf("%ld%c",&n,&x);
            cnt++;
            if(cnt==1)
                zeroElmnt=n;
            if(n>mx)
                mx=n;
            if(ans[n]==-1)
                ans[n]=n;

            else
                temp[p++]=n;

        if(x=='\n')
            break;
        }
        if(cnt==1 && zeroElmnt==0)
        break;
        if(mx>=cnt)
            printf("Message hacked by the Martians!!!\n");
        else
        {
            int i;
            p=0;
            if(ans[0]==-1)
                printf("%ld",temp[p++]);
            else
                printf("%ld",ans[0]);
            for(i=1;i<cnt;i++)
            {
                if(ans[i]==-1)
                printf(" %ld",temp[p++]);
                else
                    printf(" %ld",ans[i]);
            }
            printf("\n");
        }
    }
    return 0;
}

