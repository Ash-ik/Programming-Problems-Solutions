#include<stdio.h>
int main ()
 {
   int a,b;
   for(a=1;a<=8;a++)
     {
       for (b=1;b<=8;b++)
{
  if((a+b)%2==0)
  printf("\xdb\xdb");
  else
     printf("  ");
}
       printf("\n");
     }
     return 0;
 }
