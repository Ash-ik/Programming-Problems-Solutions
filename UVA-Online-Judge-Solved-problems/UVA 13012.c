#include <stdio.h>

int main() {
	int i,x,ans,n;
	while (scanf("%d", &n)!=EOF) {
		ans=0,i=5;
		while(i--)
			scanf("%d",&x),ans+=!(n^x);
		printf("%d\n",ans);
	}
	return 0;
}
