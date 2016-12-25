#include <iostream>
#include <string>
#include <algorithm>
#include<stdio.h>
using namespace std;
#define getchar_unlocked getchar
string fastRead_string()
{
    string str="";
    register char c = 0;
    while (c < 33)
        c = getchar_unlocked();


    while (c != '\n') {
        str=str+c;
        c = getchar_unlocked();

    }
    return str;

}
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

long long factorial[21];

void computeFactorial() {
   factorial[0] = 1;
   for(int i = 1; i < 21; ++i)
      factorial[i] = factorial[i - 1] * i;
}

void getPermutation(const string& source, long long permutation) {
   string result(source);

   for(int i = 0; i < source.size(); ++i) {
      sort(result.begin() + i, result.end());
      if (permutation == 0)
         break;
      int charPos = i + permutation / factorial[source.size() - i - 1];
      swap(result[i], result[charPos]);
      permutation = permutation % factorial[source.size() - i - 1];
   }

    puts(result.c_str());
}

int main() {
   computeFactorial();
   int n;
   n=scan_positive_int();

   for(int i = 0; i < n; ++i) {
      string source;
      long long permutation;
      source=fastRead_string();
      permutation=scan_positive_int();
      getPermutation(source, permutation);
   }
   return 0;
}
