#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,n5,m1,m2,m3,m4,m5;
    while(scanf("%d %d %d %d %d %d %d %d %d %d",&n1,&n2,&n3,&n4,&n5,&m1,&m2,&m3,&m4,&m5)!=EOF)
    {
        if(n1!=m1&&n2!=m2&&n3!=m3&&n4!=m4&&n5!=m5)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
