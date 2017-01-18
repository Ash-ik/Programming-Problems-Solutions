#include<stdio.h>
int main()
{
    int i=1,n,d1,d2,m1,m2,y1,y2,d;
    scanf("%d",&n);
    while(i<=n)
    {
        scanf("%d/%d/%d",&d1,&m1,&y1);
        scanf("%d/%d/%d",&d2,&m2,&y2);
        if(d1<d2)
        m2++;
        if(m1<m2)
        y2++;
        d=y1-y2;
        if(d<0)
            printf("Case #%d: Invalid birth date\n",i);
        else if(d>130)
        printf("Case #%d: Check birth date\n",i);
           else
        printf("Case #%d: %d\n",i,d);
        i++;
    }
    return 0;
}
