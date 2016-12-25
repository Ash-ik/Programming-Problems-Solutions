#include<stdio.h>
#include<string.h>
int min(int a,int b)
{
    if(a<b) return a;
    return b;
}
int main() {
	int i,testcase, cases = 0;
	scanf("%d", &testcase);
	while (getchar() != '\n');
	while (testcase--) {
		static char s[131072];
		fgets(s, 131072, stdin);
		int cnt[128] = {};
		for (i = 0; s[i] > ' '; i++)
			cnt[s[i]]++;
		int mn = 1000000;
		for (i = 'a'; i <= 'z'; i++)
			mn = min(mn, cnt[i]);
		printf("Case %d: %d\n", ++cases, mn);
	}
	return 0;
}
