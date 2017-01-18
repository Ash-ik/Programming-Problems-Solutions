#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define MAX 1000001
bool isPrime[MAX];

bool palPrime(int n)
{
    int reverse=0,temp;
   temp=n;

   while(temp!=0)
   {
      reverse=reverse*10;
      reverse=reverse+temp%10;
      temp=temp/10;
   }
   if(n==reverse)
    return true;
   else
    return false;
}

int main()
{
    isPrime[2]=true;
    int i,root,j,n;
    root=sqrt(MAX) + 1;
    for(i=3;i<MAX;i+=2) isPrime[i] = true;
    for(i=3;i<root;i+=2)
    {
        if(isPrime[i])
        {
            for(j=i*i;j<MAX; j+=2*i)
            {
                isPrime[j] = false;
            }
        }
    }


    while(scanf("%d",&n)==1)
    {
        printf("%d\n",n*2);
        if(isPrime[n] &&palPrime(n))
            break;
    }
    return 0;
}

