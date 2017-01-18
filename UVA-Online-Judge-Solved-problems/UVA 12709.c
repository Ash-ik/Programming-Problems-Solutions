#include<stdio.h>
int t,a,b,c,max,vol,maxV,i;
int main()
{
    while(scanf("%d",&t)!=EOF &&t)
    {
        for(i=0,max=0,maxV=0;i<t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        vol=a*b*c;
        if(c>max||(c==max &&vol>maxV))
        {
            max=c;maxV=vol;
        }
    }
    printf("%d\n",maxV);
    }
    return 0;
}
