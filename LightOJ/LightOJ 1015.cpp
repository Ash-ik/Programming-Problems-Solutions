#include <stdio.h>
int main()
{
    int t,n,i,sum;
    int a;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        sum=0;
        scanf("%d",&n);
        while(n--){
            scanf("%d",&a);
            if(a>0) sum+=a;
        }
        printf("Case %d: %d\n",i,sum);
    }

    return 0;
}
