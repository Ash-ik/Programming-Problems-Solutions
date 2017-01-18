#include<stdio.h>
int main()
{
    unsigned long long m,x,ans;
    while(scanf("%llu %llu",&m,&x)==2 &&!(m==0 &&x==0))
    {
        if(x==100 ||m==1 ||x==0) {printf("Not found\n");continue;}
        ans=((100*(m-1))/(100-x));
        if(ans<m) printf("Not found\n");
        else if(((100*(m-1))%(100-x))==0)
            printf("%llu\n",ans-1);
        else printf("%llu\n",ans);
    }
    return 0;
}
