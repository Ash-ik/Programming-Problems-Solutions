#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,t,sum,ans,flag,p,wtf;
    char in[1000],a[6][6]={"ACDB12","LFGH34","EJKIMN","OPQRST","UVWXYZ","567890"};
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        wtf=0;
        sum=0;
        gets(in);
        for(p=0;p<strlen(in);p++)
        {
            for(i=0;i<6;i++)
            {
                for(j=0;j<6;j++)
                {
                    if(in[p]==a[i][j])
                        {flag=1;ans=i+j+2;}
                        if(in[p]==' ')
                        ans=0;
                }
    }
//    printf("%d\n",ans);
    sum+=ans;
        }
        printf("%d\n",sum);
    }
}
