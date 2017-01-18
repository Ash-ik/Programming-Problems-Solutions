#include<stdio.h>
#include<string.h>
int main()
{
    char a[700];
    int m[7],x,y,min,n;
    scanf("%d",&n);
    while(n--)
    {
        m[0]=m[1]=m[2]=m[3]=m[4]=m[5]=0;
        scanf("%s",a);
        x=strlen(a);
        for(y=0;y<x;y++)
        {
            if(a[y]=='M')
            m[0]++;
            if(a[y]=='A')
            m[1]++;
            if(a[y]=='R')
            m[2]++;
            if(a[y]=='G')
            m[3]++;
            if(a[y]=='I')
            m[4]++;
            if(a[y]=='T')
            m[5]++;
        }
        m[1]=m[1]/3;m[2]=m[2]/2;
        min=m[0];
        for(y=1;y<=5;y++)
        {
            if(m[y]<=min)
            min=m[y];
        }
        printf("%d\n",min);
    }
    return 0;
}
