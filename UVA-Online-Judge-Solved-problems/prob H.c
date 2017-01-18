#include <stdio.h>

int main()
{
  unsigned long long c,n,fact=1;
  scanf("%llu",&n);
  for(c=1;c<=n;c++)
    fact=fact*c;
  printf("Factorial of %llu=%llu\n", n, fact);
  return 0;
}
