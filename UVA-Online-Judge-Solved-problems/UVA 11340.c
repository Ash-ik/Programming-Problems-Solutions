#include <stdio.h>
int main()
{
    freopen("dataN.txt","r",stdin);
    int t;
    scanf("%d", &t);
    while(t--)
        {
        int n, i;
        long long ltr[300]={},num,sum=0;
        char a[10009],temp;
        scanf("%d ", &n);
        while(n--)
            {
            gets(a);
            sscanf(a,"%c %lld",&temp,&num);
            ltr[temp]=num;
            }
            scanf("%d\n",&n);
        while(n--)
        {
            gets(a);
            for(i=0;a[i]; i++)
                sum+=ltr[a[i]];
        }
        printf("%lld.%02lld$\n",sum/100,sum%100);
    }
    return 0;
}
