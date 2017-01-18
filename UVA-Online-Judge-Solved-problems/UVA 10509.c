#include <stdio.h>
#include <math.h>

#define gc getchar_unlocked
int neg;
int scandigits(double *x, int div) {
  register int c = gc();
  register double pow10 = 1;
  if ( x == NULL ) {
    return -1;
  }
  *x = 0;
  while ( (c < '0' || c > '9') && c != '-' ) {
    c = gc();
  }
  if ( c == '-' ) {
    neg = 1;
    c = gc();
  }
  while ( !(c < '0' || c > '9') ) {
    *x *= 10;
    *x += (c - '0');
    pow10 *= 10;
    c = gc();
  }
  if ( neg )
    *x = -*x;
  if ( div )
    *x /= pow10;
  return c;
}

void scandouble(double *x) {
  double left, right = 0;
  if ( x == NULL ) {
    return;
  }
  neg = 0;
  int ret = scandigits(&left, 0);
  if ( ret == '.' )
    scandigits(&right, 1);
  *x = left + right;
}
int main() {
    double f,a;
    while(1) {
        scandouble(&f);
        if(!f)
            return 0;
        a=floor(pow(f, 1/3.0)+1e-6);
        printf("%.4lf\n",a+(f-a*a*a)/3.0/a/a);
        }
}
