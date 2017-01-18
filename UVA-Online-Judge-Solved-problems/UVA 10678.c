#include<stdio.h>
#include<math.h>
#define pi acos(-1.0)
int main()
{
    int t,l1,l2;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&l1,&l2);
        printf("%.3lf\n",(double) pi*(l2/2.0)*(sqrt((l2/2.0)*(l2/2.0)-(l1/2.0)*(l1/2.0))));
    }
    return 0;
}
