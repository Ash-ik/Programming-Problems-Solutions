#include<stdio.h>
int main()
{
    int a[10],b,c,d,n,x,p,q;
        printf("Lumberjacks:\n");
        while(scanf("%d",&n)==1)
        {
            while(n--)
        {
            for(b=0;b<10;b++)
            scanf("%d",&a[b]);
            c=a[0];
        d=a[1];
        if(c>d)
        {
            x=0;
            for(p=0;p<9;p++)
            if(a[p]>a[p+1])
            x++;
        }
        else if(c<d)
        {
            x=0;
            for(p=0;p<9;p++)
            if(a[p]<a[p+1])
            x++;
        }
        if(x==9)
        printf("Ordered\n");
        else
        printf("Unordered\n");
    }
        }
        return 0;
}
