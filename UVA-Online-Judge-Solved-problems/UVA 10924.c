#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
bool prime(int num)
{
    int sRoot,i;
    if(num<1)
        return false;
    if(num==2 ||num==1)
        return true;
    if(num%2==0)
        return false;
    sRoot=sqrt(num*1.0);
    for(i=3;i<=sRoot;i+=2)
    {
        if(num%i==0)
            return false;
    }
    return true;
}
int main()
{
    int i,x,p,z;
    char a[50];
    while(scanf("%s",a)!=EOF)
    {
        p=0;
        x=strlen(a);
        for(i=0;i<x;i++)
        {
            if(a[i]>='A' &&a[i]<='Z')
            p=p+a[i]-38;
            else p=p+a[i]-96;
        }
        if(prime(p))
        printf("It is a prime word.\n");
        else printf("It is not a prime word.\n");
    }
    return 0;
}
