#include <stdio.h>
#include <string.h>
#include<stdbool.h>
#define read freopen("in.txt","r",stdin)
#define write freopen("dataOUT.txt","w",stdout)
#define max(a,b) (a)>(b)?(a):(b)
#define min(a,b) (a)<(b)?(a):(b)
const int N = 105;
const int MAXBIGN = 305;

char sol[100005];
int solLen;
struct bign {
    int s[MAXBIGN];
    int len;
    bign() {
	len = 1;
	memset(s, 0, sizeof(s));
    }

    bign operator = (const char *number) {
	len = strlen(number);
	for (int i = 0; i < len; i++)
	    s[len - i - 1] = number[i] - '0';
	return *this;
    }
    bign operator = (const int num) {
	char number[N];
	sprintf(number, "%d", num);
	*this = number;
	return *this;
    }

    bign (int number) {*this = number;}
    bign (const char* number) {*this = number;}

    bign operator + (const bign &c){
	bign sum;
	int t = 0;
	sum.len = max(this->len, c.len);
	for (int i = 0; i < sum.len; i++) {
	    if (i < this->len) t += this->s[i];
	    if (i < c.len) t += c.s[i];
	    sum.s[i] = t % 10;
	    t /= 10;
	}

	while (t) {
	    sum.s[sum.len++] = t % 10;
	    t /= 10;
	}

	return sum;
    }

    bign operator - (const bign &c) {
	bign ans;
	ans.len = max(this->len, c.len);
	int i;

	for (i = 0; i < c.len; i++) {
	    if (this->s[i] < c.s[i]) {
		this->s[i] += 10;
		this->s[i + 1]--;
	    }
	    ans.s[i] = this->s[i] - c.s[i];
	}



	for (; i < this->len; i++) {
	    if (this->s[i] < 0) {
		this->s[i] += 10;
		this->s[i + 1]--;
	    }
	    ans.s[i] = this->s[i];
	}
	while (ans.s[ans.len - 1] == 0) {
	    ans.len--;
	}
	if (ans.len == 0) ans.len = 1;
	return ans;
    }

    void put() {
	if (len == 1 && s[0] == 0) {
	    printf("0");
	} else {
	    for (int i = len - 1; i >= 0; i--)
		printf("%d", s[i]);
	}
    }

    bool operator < (const bign& b) const {
	if (len != b.len)
	    return len < b.len;

	for (int i = len - 1; i >= 0; i--)
	    if (s[i] != b.s[i])
		return s[i] < b.s[i];
	return false;
    }
    bool operator > (const bign& b) const { return b < *this; }
    bool operator <= (const bign& b) const { return !(b < *this); }
    bool operator >= (const bign& b) const { return !(*this < b); }
    bool operator != (const bign& b) const { return b < *this || *this < b;}
    bool operator == (const bign& b) const { return !(b != *this); }
};
bign f[N];

void init() {
    f[0] = "1"; f[1] = "2";
    for (int i = 2; i < N; i ++)
	f[i] = f[i - 1] + f[i - 2];
}

char a[N], b[N];

bign change(char *a) {
    bign sum; int len = strlen(a);
    for (int i = 0; i < len; i ++) {
	if (a[len - 1 - i] == '1') {
	    sum = sum + f[i];
	}
    }
    return sum;
}
bign n3, zero;

void solve() {
    solLen=-1;
    if (n3 == zero) {
	sol[++solLen]='0';
	sol[++solLen]='\n';
	sol[++solLen]='\0';
	return;
    }
    int i, flag = 1;
    for (i = N - 1; i >= 0; i --)
	if (n3 >= f[i]) break;
    for (;i >= 0; i --) {
	if (n3 >= f[i] && flag) {
	    n3 = n3 - f[i];
    sol[++solLen]='1';
	    flag = 0;
	}
	else {
	    flag = 1;
    sol[++solLen]='0';
	}
    }
    sol[++solLen]='\n';
	sol[++solLen]='\0';
}

int main () {
    bool newLine=false;
    init();
    while (~scanf("%s%s", a, b)) {
	if (newLine) printf("\n");
	newLine=true;
	n3 = change(a) + change(b);
	solve();
	fwrite(sol,1,solLen,stdout);
    }
    return 0;
}
