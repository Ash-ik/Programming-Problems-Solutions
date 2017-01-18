#include<stdio.h>
int  mini(int,int,int);
int main()
{
    long int temp,a,b,c,d,i,t,n,min,ans,minion;
    scanf("%ld",&n);
    for(i=1;i<=n;i++)
    {
        temp=0;
        scanf("%ld %ld %ld %ld",&a,&b,&c,&d);
        ans=mini(a,b,c);
        min=ans;
        a=a-min;
        b=b-min;
        c=c-min;
        t=d/3;
        ans=ans+(d/3);
        d=d%3;
        if(a==0)
        temp++;
        if(b==0)
        temp++;
        if(c==0)
        temp++;
        if(temp==3)
        printf("Case %ld: %ld\n",i,ans);
        else if(temp==2)
        {
            if(d==1)
            printf("Case %ld: %ld\n",i,ans);
            else if(d==0)
            {
                minion=mini(a,b,c);
                if(a==minion)
                    a=t+minion;
                if(b==minion)
                    b=t+minion;
                if(c==minion)
                    c=t+minion;
                    minion=mini(a,b,c);
                printf("Case %ld: %ld\n",i,ans+minion);
            }
            else if(d==2)
            printf("Case %ld: %ld\n",i,ans+1);
        }
        else if(temp==1)
        {
            if(d==0)
            {
                minion=mini(a,b,c);
                if(a==minion)
                    a=t+minion;
                else if(b==minion)
                    b=t+minion;
                    else if(c==minion)
                    c=t+minion;
                    printf("%d\n",t);
                    minion=mini(a,b,c);
                printf("Case %ld: %ld\n",i,ans+minion);
            }
            else if(d==1)
            printf("Case %ld: %ld\n",i,ans+1);
            else if(d==2)
            {
                 if(a==0)
                 {
                     a=mini(b,c,d);
                    printf("Case %ld: %ld\n",i,ans+a);
                 }
                 if(b==0)
                 {
                        b=mini(a,c,d);
                        printf("Case %ld: %ld\n",i,ans+b);

                 }
                 if(c==0)
                 {
                     c=mini(a,b,d);
                     printf("Case %ld: %ld\n",i,ans+c);

                 }
            }
        }
    }
    return 0;
}
int mini(int a,int b,int c)
{
                    if(a<=b && a<=c)
                     return a;
                     else if(c<=a && c<=b)
                     return c;
                     else if(b<=a && b<=c)
                     return b;
}
