#include<bits/stdc++.h>
#define putchar pc
#define pc putchar_unlocked
using namespace std;
int main()
{
    char a[100009];
    while(gets(a))
    {
        list<char>ans;
        list<char>::iterator point=ans.begin();
        int i,p=strlen(a);
        for(i=0;i<p;i++)
        {
            if ( a[i]=='[') point=ans.begin();
            else if (a[i]==']') point=ans.end();
            else ans.insert(point,a[i]);
        }
        for(point=ans.begin();point!=ans.end();point++)
            putchar(*point);
            putchar('\n');
    }
    return 0;
}
