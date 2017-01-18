#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int x1,x2,y1,y2;
    while(scanf("%d %d %d %d",&x1,&y1,&x2,&y2)==4 &&(x1+x2+y1+y2))
    {
        if(x1>8 ||x2>8 ||y1>8 ||y2>8 ||(x1==x2 &&y1==y2))
        printf("0\n");
        else if(x1==x2 ||y1==y2||abs(x1-x2)==abs(y1-y2))
        printf("1\n");
        else printf("2\n");
    }
    return 0;
}
