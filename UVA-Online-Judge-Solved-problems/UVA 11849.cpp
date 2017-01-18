#include<cstdio>
 #include<map>
 #include<cstring>
 using namespace std;
 #define clr(a) memset(a,0,sizeof(a))
 int main()
 {
     long long temp,m,n,i,a,match;
     map<long, long>ans;
     while(scanf("%lld %lld",&m,&n) && !(m==0 && n==0))
     {
         match=0;
         for(i=0;i<m;i++)
         {
             scanf("%lld",&a);
             ans[a]=1;
         }
         for(i=0;i<n;i++)
         {
             scanf("%lld",&temp);
             if(ans[temp]==1)
              match++;
         }
        ans.clear();
         printf("%lld\n",match);
     }
 return 0;
 }
