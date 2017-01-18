#include<stdio.h>

int trailingZeroes(int n) {
  int f5 = 0;
  for (; n / 5 > 0; n /= 5)
    f5 += n / 5;

  return f5;
}


int main()
{
    int num;
    while(scanf("%d",&num) &&num)
        printf("%d\n",trailingZeroes(num));

}
