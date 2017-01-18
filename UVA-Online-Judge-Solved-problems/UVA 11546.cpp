#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int L,N;
    while(scanf("%d %d",&L,&N))
    vector <pair<vector<int>,int> >lanes(N+1);

    for (int i=0;i<=N;i++)
	lanes[i].second = i;

    sort(lanes.begin(), lanes.end());

int pos = 0;
for (int i=1;i<=N;i++)
	if (lanes[i].first == lanes[i-1].first)
		pos = max(pos,lanes[i].second - lanes[i-1].second);
	else
		pos = i;

return pos;
}
