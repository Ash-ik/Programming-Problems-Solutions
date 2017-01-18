#include<stdio.h>
int main()
{
    int b,s,i,a,min,p=1;
    while(scanf("%d %d",&b,&s)==2 &&!(b==0 &&s==0))
    {
        for(i=1;i<=b+s;i++)
        {
            scanf("%d",&a);
            if(i==1) min=a;
            if(i<=b)
            if(a<min)
            min=a;
        }
        if(b<=s) printf("Case %d: 0\n",p++);
        else printf("Case %d: %d %d\n",p++,b-s,min);
    }
    return 0;
}
