#include<bits/stdc++.h>
#define read freopen("dataN.txt","r",stdin)
using namespace std;
const int N = 1e5;  // limit for array size
int n;  // array size
int t[2 * N];

void build()    // build the tree
{
    for (int i = n - 1; i > 0; --i) t[i] = t[i<<1] + t[i<<1|1];
}

int query(int l, int r)
{
    l--;
    // sum on interval [l, r]
    int res = 0;
    for (l += n, r += n; l < r; l >>= 1, r >>= 1)
    {
        if (l&1) res += t[l++];
        if (r&1) res += t[--r];
    }
    return res;
}

int main()
{
    read;
    int l,r,q;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%d", t + n + i);
    build();
    scanf("%d",&q);
    while(q--)
    scanf("%d %d",&l,&r),printf("%d\n", query(l,r));
    return 0;
}
