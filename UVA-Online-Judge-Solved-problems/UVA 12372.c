#include<stdio.h>
int main()
{
    int t,i=1;
    scanf("%d",&t);
    while(i<=t)
    {
        int l,w,h;
        scanf("%d %d %d",&l,&w,&h);
        if(l<=20 && l>=1 && w<=20 &&w>=1 && h<=20 && h>=1)
        printf("Case %d: good\n",i);
        else
        printf("Case %d: bad\n",i);
        i++;
    }
    return 0;
}
