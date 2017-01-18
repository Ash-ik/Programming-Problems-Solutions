#include<stdio.h>
#include<string.h>
char a[500];
int main()
{
    int count,t,M,E,flag,indexM,indexE,ans,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",a);
        ans=0;
        flag=1,count=0;
        for(i=0;a[i];i++)
        {
            if(a[i]=='M' ||a[i]=='E'||a[i]=='?')
            {
                if(a[i]=='?') ans++;
                if(a[i]=='M')
                {
                    count++;
                    indexM=i;
                    M=ans;
                    ans=0;
                }
                if(a[i]=='E')
                {
                    count++;
                    indexE=i;
                    E=ans;
                    ans=0;
                }
            }
            else {flag=0;break;}
        }
        if(indexM>indexE ||flag==0||M+E!=ans||E==0||M==0||ans==0||count!=2)
                printf("no-theorem\n");
            else
                printf("theorem\n");
    }
    return 0;
}
