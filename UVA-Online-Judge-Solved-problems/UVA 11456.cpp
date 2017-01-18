#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cctype>
#include <vector>
#include <list>
#include <iostream>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <queue>
#include <stack>

#define swp(type, a, b) {type x=a; a=b; b=x;}

typedef long long lint;
typedef unsigned long long ulint;

using namespace std;

int seq[10000];
int lis[10000], lds[10000];

int LIS(int n) {

 int i, j, mx=0;


 for (i=n-1 ; i>=0 ; i--) {
  lis[i] = 1;
  for (j=i+1 ; j<n ; j++) {
   if (seq[i]<seq[j]) {
    lis[i] = max(lis[i] , 1+lis[j]);
   }
  }
  mx = max(mx, lis[i]);
 }
 return mx;
}

int LDS(int n) {

 int i, j, mx=0;


 for (i=n-1 ; i>=0 ; i--) {
  lds[i] = 1;
  for (j=i+1 ; j<n ; j++) {
   if (seq[i]>seq[j]) {
    lds[i] = max(lds[i] , 1+lds[j]);
   }
  }
  mx = max(mx, lds[i]);
 }
 return mx;
}



int main ( void ) {

 int i, kount, kase, n, x, mx, mnn, mxx, len, res;



 cin >> kase;

 while (kase--) {
  cin >> n;
  mx = n;

  len = 0;
  kount = 0;
  while (mx--) {
   cin >> x;
   seq[kount++] = x;
  }

  LDS(n); LIS(n);

  res = 0;

  for (i=0 ; i<n ; i++) {
   res = max(res, lis[i]+lds[i]-1);
  }


  /*cout << "{ debug-start" << endl;
  for (i=0 ; i<n ; i++) {
   cout << seq[i] << " ";
  } cout << endl;
  for (i=0 ; i<n ; i++) {
   cout << lis[i] << " ";
  } cout << endl;
  for (i=0 ; i<n ; i++) {
   cout << lds[i] << " ";
  } cout << endl;
  cout << "end-debug }" << endl;*/

  cout << res << endl;
 }

 return 0;
}
