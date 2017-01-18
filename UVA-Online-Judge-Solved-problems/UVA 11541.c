#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000],ans[10000];
    long int p=1,t,i,temp,x,j;
    scanf("%ld",&t);
    getchar();
    while(p<=t)
    {
        gets(a);
        ans[0]=a[0];
        j=1;
        temp=0;
        printf("Case %ld: ",p++);
        for(i=1;a[i]!='\0';i++)
        {
            if(a[i]>='0' &&a[i]<='9')
            {
                temp=temp*10+a[i]-'0'-temp;
            }
            else
            {
                ans[j]=a[i];
                temp=0;
                j++;
            }
            for(x=1;x<=temp;x++) printf("%c",ans[j-1]);
        }
        printf("\n");
    }
    return 0;
}
