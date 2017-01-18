#include<stdio.h>
#include<string.h>
int main()
{
    int t,flag=0;
    double l,w,wt,d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf %lf %lf %lf",&l,&w,&d,&wt);
        if(((l+w+d)<=125.0 ||(l<=56.0 &&w<=45.0 &&d<=25.0)) &&(wt<=7.0))
        {
            flag++;
            printf("1\n");
        }
        else printf("0\n");
    }
    printf("%d\n",flag);
    return 0;
}
