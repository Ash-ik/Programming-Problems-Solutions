#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define getchar_unlocked getchar
int scan_positive_int()
{
        int x=0;
        register int c=getchar_unlocked();
        for(; c>47 && c<58 ; c = getchar_unlocked())
        {
                x = (x<<1) + (x<<3) + c - 48;
        }
        return x;
}

void fastRead_string(char *str)
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


int main() {
	int testcase,i,sum,n;
	long long ans=0;
	char in[10];
	testcase=scan_positive_int();
	while (testcase--) {
		n=scan_positive_int();
		int leakedQuestion[11] = {}, unleakedQuestion[11] = {};
		for (i = 0; i < n; i++) {
			int d, s, r;
			fastRead_string(in);
			if(strlen(in)==5)
            {
                d=in[0]-'0';
                s=in[2]-'0';
                r=in[4];
            }
            else
            {
                d=10;
                s=in[3]-'0';
                r=in[5];
            }
            if(s && r=='c')
				leakedQuestion[d]++;
			else if (!s && r=='i')
				unleakedQuestion[d]++;
		}
		ans=0;
		for (i = 0,sum = 0; i < 11; i++) {
			ans += 1LL * leakedQuestion[i] * sum;
			sum += unleakedQuestion[i];
		}
		printf("%lld\n",ans);
	}
	return 0;
}
