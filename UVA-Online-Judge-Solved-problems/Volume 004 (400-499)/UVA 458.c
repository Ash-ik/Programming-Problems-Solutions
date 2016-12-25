#include<stdio.h>
#include<string.h>
char a[1000000];
int main()
{
    long int l,i;
while(gets(a))
 {
 l=strlen(a);
 for(i=0;i<l;i++)
 printf("%c",(long int)(a[i]-7));
 printf("\n");
 }
return 0;
}
