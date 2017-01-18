#include<stdio.h>
unsigned long long fib(unsigned long long n)
{
  unsigned long long a = 0, b = 1, c, i;
  if( n == 0)
    return a;
  for (i = 2; i <= n; i++)
  {
     c = a + b;
     a = b;
     b = c;
  }
  return b;
}

int main ()
{
    unsigned long long n,ans;
    while(scanf("%llu",&n)==1)
  {
      ans=fib(n);
  printf("%llu\n",ans);
  }
  getchar();
  return 0;
}

