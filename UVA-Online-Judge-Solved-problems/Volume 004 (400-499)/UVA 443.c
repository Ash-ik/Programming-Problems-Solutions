#include<stdio.h>
#include<math.h>
long long compare (const void * a, const void * b)
{
    return ( *(long long*)a - *(long long*)b );
}

int main()
{
    int i,j,k,l,factor[4]= {2,3,5,7},counts=1;
    long long ans[5845]= {1},pow2=1,pow3=1,pow5=1,pow7=1;
    for(; counts<5843 && pow2<2000000001;)
    {
        for(;counts<5843 && (pow2*pow3)<2000000001;)
        {

            for(;counts<5843 && (pow2*pow3*pow5)<2000000001;)
            {
                for(;counts<5843 && (pow2*pow3*pow5*pow7)<2000000001;)
                {
                    ans[counts++]=(pow2*pow3*pow5*pow7);

                    pow7=pow7*7;
                }
                pow5=pow5*5;
            }
            pow3=pow3*3;
        }
        pow2=pow2<<1;
    }
//    qsort(ans,counts,sizeof(long long),compare);

    printf("%lld\n",ans[2]);
}
