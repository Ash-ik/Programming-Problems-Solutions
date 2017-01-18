#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#define MAX 10000001

    bool isPrime[MAX];
    int savePrime[100000];
int prime_test_and_generate()
{
    isPrime[2]=true;
    int i,z=0,j;
    for(i=3;i<MAX;i+=2) isPrime[i]=true;
    for(i=3;i<=sqrt(MAX);i+=2)
    {
        if(isPrime[i])
        {
            savePrime[z++]=i;
            for(j=i*i;j<MAX;j+=2*i)
            isPrime[j]=false;
        }
    }
    printf("%d\n",z);
    return z;
}

int main()
{
    int q,p=prime_test_and_generate();

}
