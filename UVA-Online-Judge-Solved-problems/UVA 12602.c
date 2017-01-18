#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,sum,z;
    char a[10];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%3s-%d",a,&z);
            sum=(a[0]-'A')*pow(26,2)+(a[1]-'A')*pow(26,1)+(a[2]-'A');
        if(abs(sum-z)<=100)
        printf("nice\n");
        else printf("not nice\n");
    }
    return 0;
}
