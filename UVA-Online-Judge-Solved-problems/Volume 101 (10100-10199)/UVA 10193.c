#include<stdio.h>
#include<string.h>
int gcd(int n1,int n2)
{
    int temp;
    while(n2!=0)
    {
        temp=n2;
        n2=n1%n2;
        n1=temp;
    }
    return n1;
}
int main()
{
    int x,z=1,t,y,i,ans,p;
    char a[1000],b[1000];
    scanf("%d",&t);
    getchar();
       while(z<=t)
        {
            x=0,y=0;
            scanf("%s %s",a,b);
            for(i=0,p=strlen(a)-1;i<strlen(a);i++,p--) if(a[i]=='1') x+=1<<p;
            for(i=0,p=strlen(b)-1;i<strlen(b);i++,p--) if(b[i]=='1') y+=1<<p;
            ans=gcd(x,y);
            if(ans>1)
            printf("Pair #%d: All you need is love!\n",z++);
            else printf("Pair #%d: Love is not all you need!\n",z++);
        }
        return 0;
}
