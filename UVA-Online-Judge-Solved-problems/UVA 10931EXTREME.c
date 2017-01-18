#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
char a[10000000];
int main()
{
    long x,b,c;
    while(scanf("%ld",&x)==1 && x!=0)
    {
        ltoa(x,a,2);               //converts long int to string.
            b=0,c=0;
            while(a[c]!='\0')
            {
                if(a[c]=='1')
                b++;
                c++;
            }
        printf("The parity of %s is %ld\n",a,b);
    }
    return 0;
}
