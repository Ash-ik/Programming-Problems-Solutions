#include<stdio.h>
#include<string.h>
int min(int a,int b)
{
    if(a<b)
    return a;
    else return b;
}
int main()
{
//    freopen("dataN.txt","r",stdin);
    int n,b,i,tempu,flag,x,ans,ps,sum,sp,temp,ans1,ans2;
    char a[10010];
    scanf("%d\n",&n);
    while(n--)
    {
        sp=0,flag=0,ans2,ans1=0;sum=0,ps=0;
        gets(a);
        b=strlen(a);
//        if(a[0]=='A')
//        sum++;
        if(a[b-1]=='A')
        {
            tempu=b-1;
            while(a[tempu]=='A' &&tempu!=0)
            {sp++;tempu--;}
        }
                    if(a[1]=='A')
                    {
                        temp=1;
                    while(a[temp]=='A')
                {ps++;temp++;}
                    }
        for(i=0;i<b;i++)
        {
            x=a[i]-'A';
            if(x>13)
            x=26-x;
            sum=sum+x;
        }
        if(!sum){ puts("0"); continue;}
//        if(a[0]=='A' &&a[temp]=='A')
//        {ps--;ans1++;ans2++;}
        ans1=sum+b-sp-1;
        ans2=sum+b-ps;
        ans=min(ans1,ans2);
        printf("%d\n",ans);
    }
    return 0;
}
