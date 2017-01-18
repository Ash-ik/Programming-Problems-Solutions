#include<bits/stdc++.h>
using namespace std;

void KMP_prefix(string p,int pref_table[])
{
    int i=0,j,m=p.length();
    for(j=2;j<m;j++)
    {
        while(i>0 &&p.at(i)!=p.at(j-1))
            i=pref_table[i];
        if(p.at(i)==p.at(j-1))
            i++;
        pref_table[j]=i;
    }

}

void KMP_matcher(string t,string p,int pref_table[])
{
    int n=t.length(),m=p.length(),i=0,j;
    for(j=0;j<n;j++)
    {
        while(i>0 &&p.at(i)!=t.at(j))
            i=pref_table[i-1];
        if(p.at(i)==t.at(j))
            i++;
        if(i==m)
            {
                cout<<"Pattern found at "<<j-m+2<<" position\n";
                i=pref_table[i];
            }
    }
}
int main()
{
    string x,y;
    while(1)
    {
        cout<<"Enter string Y:";
        getline(cin,y);
        cout<<"Enter string X to search into Y:";
        getline(cin,x);

        int pref_table[x.length()+1];
        memset(pref_table,0,sizeof(pref_table));

        KMP_prefix(x,pref_table);
//        for(int i=1;i<=x.length();i++)
//            cout<<pref_table[i]<<" ";
        KMP_matcher(y,x,pref_table);
    }
    return 0;
}
