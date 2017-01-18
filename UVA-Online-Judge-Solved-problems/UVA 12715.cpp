#include <cstdio>
#include <algorithm>
#include<string.h>
using namespace std;
#define MAXIMUM_BUFFER_CAPACITY 30000000
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

struct pii
{
    int first;
    int second;
};


inline bool comp (const pii &a, const pii &b) { return (a.first < b.first) || (a.first == b.first && a.second > b.second); }
inline bool compare (const pii &a, const pii &b) { return (a.first < b.first); }

    int t, cs = 1;
int n, m;
char print[20];
int main () {
    freopen("data1.txt","r",stdin);
fread(buffer_to, 1, MAXIMUM_BUFFER_CAPACITY, stdin);
t=scan_integer();
    while(t--) {
        int cur=0;
        m=scan_integer();
        n=scan_integer();

        int ans [n+2];
        pii query [m+2], x [n+2];

        for (int i = 0; i < m; ++i) {query [i].first=scan_integer();query [i].second=scan_integer();}
        for (int i = 0; i < n; ++i) { x [i].first=scan_integer(); x [i].second = i; }

        sort (query, query + m, comp);
        sort (x, x + n,compare);

        for (int i = 1; i < m; ++i) if (query [i].second > query [cur].second) query [++cur] = query [i];
        m = cur + 1; cur = 0;

        for (int i = 0; i < n; ++i) {
            int px = x [i].first;
            int &mn = ans [x [i].second] = 0;

            if (cur >= m) cur = m - 1;;
            while (cur < m && px >= query [cur].first) {
                if (px >= query [cur].second) { ++cur; continue; }
                int val = min (px - query [cur].first, query [cur].second - px);
                if (val < mn) break;
                mn = val;
                ++cur;
            }
            --cur;
        }

        printf ("Case %d:\n", cs++);
        for (int i = 0; i < n; ++i) {
                sprintf(print,"%d\n",ans[i]);
        fwrite(print,1,strlen(print),stdout);
        }
    }

    return 0;
}
