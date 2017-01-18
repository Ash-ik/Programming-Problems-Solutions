#include<stdio.h>
int mini(int,int,int);
int main()
{
    int m,a,b,c,d,max1,max2,i,z=1,ans,n;
    scanf("%d",&n);
    while(z<=n)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a>=b && a>=c)
    {max1=a;
    if(b>=c)
    {max2=b;m=c;}
    else {max2=c;m=b;}
    }
    else if(b>=a && b>=c)
    {max1=b;
    if(a>=c)
    {max2=a;m=c;}
    else {max2=c;m=a;}
    }
    else {
        max1=c;
        if(a>=b)
        {max2=a;m=b;}
        else {max2=b;m=a;}
    }
        if(m==0 && max2==0)
        {
            while(m<max1 &&max2<max1 && d>1)
        {
            m++;max2++;d=d-2;
        }
        while(d>2)
        {
            max1++;max2++;m++;d=d-3;
        }
        }
            else
            {
                while(m<=max2 &&d>0 )
                {m++;d--;}
                while(max2<=max1 && m<=max1 && d>1)
                {m++;max2++;d=d-2;}
                while(d>2)
                {
                d=d-3;m++;max2++;max1++;
                }
            }
    ans=mini(m,max2,max1);
    printf("Case %d: %d\n",z,ans);
    z++;
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
