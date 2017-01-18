#include<stdio.h>
#include<vector>
#include<math.h>
#include<algorithm>
#define limit powl(2,31)
using namespace std;
int main()
{
    vector<long>data;
    int i,j;
    long n;
    for(i=0;i<=31;i++)
    {
        for(j=0;j<=31;j++)
        {
            long temp=powf(2.0,i)*powf(3.0,j);
            if(temp<=limit)
                data.push_back(temp);
                else
                    break;
        }
    }
    sort(data.begin(),data.end());

    while(scanf("%ld",&n)==1 &&n)
    {
        int pos=lower_bound(data.begin(),data.end(),n)-data.begin();
        printf("%ld\n",data[pos]);
    }
    return 0;

}
