#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
#include <ctime>

#define Inf 2147483647
#define Pi acos(-1.0)
#define N 1000000
#define LL long long

inline LL Power(int b, int p) { LL ret = 1; for ( int i = 1; i <= p; i++ ) ret *= b; return ret; }

#define F(i, a, b) for( int i = (a); i < (b); i++ )
#define Fs(i, sz) for( size_t i = 0; i < sz.size (); i++ )
#define Fe(i, x) for(typeof (x.begin()) i = x.begin(); i != x.end (); i++)
#define Set(a, s) memset(a, s, sizeof (a))
#define max(a, b)  (a < b ? b : a)
#define min(a, b)  (a > b ? b : a)

using namespace std;

char input [N];

int main ()
{
    while ( scanf ("%s", input) != EOF ) {

        int len = strlen (input);

        list <char> output;

        list <char>::iterator it = output.begin();

        for ( int i = 0; i < len; i++ ) {

            if ( input [i] == '[' ) it = output.begin();
            else if ( input [i] == ']' ) it = output.end();
            else output.insert(it, input [i]);
        }

        for ( it = output.begin(); it != output.end(); it++ )
            printf ("%c", *it);

        printf ("\n");
    }

    return 0;
}
