#include<stdio.h>
char a[10000000];
int main()
{
    unsigned long long x,b,c;
    while(scanf("%llu",&x)==1 && x!=0)
    {
        b=0,c=0;
        printf("The parity of ");
        while(x!=0)
        {
            a[c]=x%2+'0';
            if(a[c]=='1') b++;
            x/=2;
            c++;
        }
        while(c--)printf("%c",a[c]);
        printf(" is %llu (mod 2).\n",b);
    }
    return 0;
}
