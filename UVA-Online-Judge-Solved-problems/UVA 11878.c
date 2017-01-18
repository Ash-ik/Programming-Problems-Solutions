#include<stdlib.h>
#include<stdio.h>
int main()
{
    int x,z,a,c,ans=0;
    char b,d[5];
    while(scanf("%d%c%d=%s",&a,&b,&c,d)==4)
    {
        z=atoi(d);
        x=(b=='+'?(a+c):(a-c));
        if(x==z) ans++;
    }
    printf("%d\n",ans);
    return 0;
}
