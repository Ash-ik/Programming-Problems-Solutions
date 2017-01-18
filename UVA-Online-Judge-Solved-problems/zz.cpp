#include <stdio.h>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

#define long long long
const long M = 1000000007; // modulo

map<long, long> F;
vector<long> T[1234];

long f(long n, int Depth) {
	T[Depth].push_back(n);
	if (F.count(n)) return F[n];
	long k=n/2;
	if (n%2==0) { // n=2*k
		return F[n] = (f(k, Depth+1)*f(k, Depth+1) + f(k-1, Depth+1)*f(k-1, Depth+1)) % M;
	} else { // n=2*k+1
		return F[n] = (f(k, Depth+1)*f(k+1, Depth+1) + f(k-1, Depth+1)*f(k, Depth+1)) % M;
	}
}

main(){
	long n;
	F[0]=F[1]=1;
	if (cin >> n) {
		if (n==0)
			cout << 0 << endl;
		else
			cout << f(n-1, 0) << endl;
	}
	for (int i=0; i<1234; i++) if (T[i].size()) {
		sort(T[i].begin(), T[i].end());
		T[i].erase(unique(T[i].begin(), T[i].end()), T[i].end());
		printf("Depth[%d] : ", i);
		for (int j=0; j<T[i].size(); j++) printf("%lld ", T[i][j]);
		printf("\n");
	}
}
