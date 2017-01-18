#include<stdio.h>
#include<stdlib.h>
#define MAXIMUM_BUFFER_CAPACITY 30000000
#define read freopen("dataN.txt","r",stdin)
#define write freopen("dataOUT.txt","w",stdout)
char buffer_to[MAXIMUM_BUFFER_CAPACITY];
char *buffer_ptr = buffer_to;
int scan_integer()
{
    int k = 0;
    while( *buffer_ptr < 33 )
        buffer_ptr++;
    do {
        k = k*10 + *buffer_ptr++ - '0';
    } while(*buffer_ptr > 32);
    return k;
}


#define gc getchar_unlocked
#define getchar_unlocked getchar
#define pc(x) putchar_unlocked(x)
#define putchar_unlocked putchar
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


int scan_positive_int(int *a)
{
        int x=0;
        register int c=getchar_unlocked();
        for(; c>47 && c<58 ; c = getchar_unlocked())
        {
                x = (x<<1) + (x<<3) + c - 48;
        }
        *a=x;
}

int fastRead_int() {
    register int c = getchar_unlocked();
    int x = 0;
    int neg = 0;
    for(; ((c<48 || c>57) && c != '-'); c = getchar_unlocked());
    if(c=='-') {
        neg = 1;
        c = getchar_unlocked();
    }
    for(; c>47 && c<58 ; c = getchar_unlocked()) {
        x = (x<<1) + (x<<3) + c - 48;
    }
    if(neg)
        return -x;
    return x;
}

    inline void writeInt (int n)
    {
        int N = n, rev, count = 0;
        rev = N;
        if (N == 0) { pc('0'); pc('\n'); return ;}
        while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
        rev = 0;
        while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
        while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
        while (count--) pc('0');
    }

inline void fastRead_string(char *str)
{
    register char c = 0;
    register int i = 0;
    while (c < 33)
        c = getchar_unlocked();


    while (c != '\n') {

        str[i] = c;

        c = getchar_unlocked();

        i = i + 1;

    }

    str[i] = '\0';

}




int main()
{
    fread(buffer_to,1,MAXIMUM_BUFFER_CAPACITY,stdin);

    /*write your program here... to take integer as input write variable_type variable_name=scan_integer(); */
}
