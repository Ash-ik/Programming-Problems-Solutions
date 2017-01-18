#include<stdio.h>
#include<math.h>
int main()
{
    long long t,p=1,x,a,z;
    scanf("%lld",&t);
    while(p<=t)
    {
        scanf("%lld",&a);
         printf("Case %lld:",p++);
        z=sqrt(a);

for(z = sqrt(a-1);z>=1;z--)
    {
        x= a-(z*z);
        if(x && x%z==0)
            printf(" %d",x);
    }
        printf("\n");
    }
    return 0;
}
