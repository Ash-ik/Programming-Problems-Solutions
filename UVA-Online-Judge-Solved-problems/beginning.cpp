#include <cstdio>
#include <algorithm>

struct S {
  int s1, s2;
  bool operator < (const S & other) const {
    return (s1 - s2) > (other.s1 - other.s2);
  }
} s[100000];

int main() {
    freopen("dataN.txt","r",stdin);
    freopen("ashNEW.txt","w",stdout);
  int N, G;
  while (scanf("%d%d", &N, &G) == 2) {
    for (int i = 0; i < N; i++) {
      scanf("%d%d", &s[i].s1, &s[i].s2);
    }
    std::sort(s, s + N);
    int sum = 0;
    for (int i = 0; i < N; i++) {
      int need = -(s[i].s1 - s[i].s2);
      if (need >= 0) {
        if (G > need) {
          G -= need + 1;
          need = -1;
        } else {
          need -= G;
          G = 0;
        }
      }
      sum += (need < 0) * 3 + !need;
    }
    printf("%d\n", sum);
  }
  return 0;
}
