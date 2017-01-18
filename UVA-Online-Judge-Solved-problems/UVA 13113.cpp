#include <bits/stdc++.h>
#define read freopen("dataN.txt","r",stdin)
using namespace std;

double P[1024][512], V[1024];
bool cmp(pair<double, int> a, pair<double, int> b) {
	if (a.first != b.first)
		return a.first > b.first;
	return a.second < b.second;
}

#define gc getchar_unlocked

int scandigits(double *x, int div) {
  register int c = gc();
  register double pow10 = 1;
  if ( x == NULL ) {
    return -1;
  }
  *x = 0;
  while ( (c < '0' || c > '9')) {
    c = gc();
  }
  while ( !(c < '0' || c > '9') ) {
    *x *= 10;
    *x += (c - '0');
    pow10 *= 10;
    c = gc();
  }
  if ( div )
    *x /= pow10;
  return c;
}

void scandouble(double *x) {
  double left, right = 0;
  if ( x == NULL ) {
    return;
  }
  int ret = scandigits(&left, 0);
  if ( ret == '.' )
    scandigits(&right, 1);
  *x = left + right;
}

int scan_positive_int(int *a)
{
        int x=0;
        register int c=gc();
        for(; c>47 && c<58 ; c = gc())
        {
                x = (x<<1) + (x<<3) + c - 48;
        }
        *a=x;
}
int main() {
	int testcase, A, B;
	scan_positive_int(&testcase);
	while (testcase--) {
            scan_positive_int(&A);
            scan_positive_int(&B);
		double T[1024] = {}, tot = 0;
		int out[1024] = {};
		for (int i = 0; i < B; i++) {
			for (int j = 0; j < A; j++)
				scandouble(&P[i][j]);
			scandouble(&V[i]);
			tot += V[i];
			for (int j = 0; j < A; j++)
				T[j] += P[i][j] * V[i];
		}
		vector< pair<double, int> > O;
		for (int i = 0; i < A; i++)
			O.push_back(make_pair(T[i], i+1));
		sort(O.begin(), O.end(), cmp);
		int ret = 2;
		if (O[0].first >= tot * 50.1)
			ret = 1;
		for (int i = 0; i < O.size() && i < ret; i++)
			printf("%d %.lf\n", O[i].second, O[i].first/100);
		if (testcase)
			puts("");
	}
	return 0;
}
