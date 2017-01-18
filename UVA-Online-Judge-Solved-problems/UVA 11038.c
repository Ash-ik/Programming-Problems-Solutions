#include<stdio.h>
#include<string.h>
#include<stdbool.h>
long long ten[20] = { 1 };

long long solve(long long b) {
	if(b<0) return 0;

	char s[20];
	sprintf(s,"%lld",b);
	int i,k,n=strlen(s);

	long long suf[20],res=1,pref=0;

	suf[n]=0;
	for (i=n-1;i>=0;i--)
		suf[i] = suf[i+1] + (s[i] - '0') * ten[n-i-1];

	for(k=1;k<n;k++)
    {
		pref = pref * 10 + (s[k-1] - '0');
		if (s[k] != '0')
			res+=pref*ten[n-k-1];
		else
			res+=(pref-1)*ten[n-k-1]+suf[k+1]+1;
	}
	return res;
}

int main() {

        int x;
    	for(x=1;x<20;x++)
		ten[x]=ten[x-1]*10;

	long long m,n;
	while(scanf("%lld %lld",&m,&n)==2 && m>=0 && n>=0)
		printf("%lld\n", solve(n)-solve(m-1));

		return 0;
}
