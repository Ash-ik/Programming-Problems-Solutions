#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int a,b;
        scanf("%ld %ld",&a,&b);
        long int ans=(int)sqrt(b)-(int)sqrt(a-1);
        printf("%ld\n",ans);
    }
    return 0;
}
