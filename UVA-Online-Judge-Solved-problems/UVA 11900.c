#include<stdio.h>
int main()
{
    int i=1,n,c,g,t,a[100],x,y,z,sum;
    scanf("%d",&t);
    while(i<=t)
    {
        sum=0,x=0,y=0,z=0;
        scanf("%d %d %d",&n,&c,&g);
        while(x<n) scanf("%d",&a[x++]);
        while(y<c && y<n)
        {
            sum+=a[y++];
            if(sum>g)
                break;
                z++;
        }
        printf("Case %d: %d\n",i,z);
        i++;
    }
    return 0;
}
