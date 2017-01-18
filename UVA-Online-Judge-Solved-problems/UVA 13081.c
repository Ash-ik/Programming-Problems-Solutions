#include<stdio.h>
typedef unsigned long long ULL;
#define MAXIMUM_BUFFER_CAPACITY 3300010

char buffer_to[MAXIMUM_BUFFER_CAPACITY];
char *buffer_ptr = buffer_to;
ULL scan_integer()
{
    ULL k=0;
    while(*buffer_ptr<33)
        buffer_ptr++;
    do {
        k = k*10 + *buffer_ptr++ - '0';
    } while(*buffer_ptr > 32);
    return k;
}

int main() {
    fread(buffer_to,1,MAXIMUM_BUFFER_CAPACITY,stdin);
	int testcase,i;
	testcase=scan_integer();
	ULL L,R;
	while(testcase--) {
        L=scan_integer();
        R=scan_integer();
		if (L==R) {
			ULL ret=0;
			for(i=1;i<63;i++) {
				ULL a,v=1LL<<(i+1);
				a=L/v*v+(1LL<<i);
				int odd=a<=L && L<a+(1LL<<i) && (L - a)%2 == 0;
				if (i == 0)	odd++;
				if (odd%2)
					ret |= 1LL<<i;
			}
			if ((L+1)/2%2 == 0)	ret |= 1;
			printf("%llu\n", ret);
		} else if (R - L >= 2) {
			puts("0");
		} else {
			printf("%d\n", R%4 == 0);
		}
	}
	return 0;
}
