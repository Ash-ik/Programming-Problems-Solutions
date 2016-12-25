#include <stdio.h>
#include <math.h>
int main(){
    long long ans,a,b,temp;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        temp=(a*(a-1))>>1;
        ans=ceil((-.5+sqrt(1+(b+temp)*(2<<2))*.5));
        printf("%lld\n",ans);
    }
    return 0;
}
