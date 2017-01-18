#include<stdio.h>
#include<string>
#include<set>
#include<cstring>
using namespace std;
char tolower(char z)
{
    if(z>='A' &&z<='Z')
        return z+32;
    return z;
}
bool isalpha(char p)
{
    if((p>='a'&&p<='z')||(p>='A'&&p<='Z'))
        return true;
    return false;
}
int main()
{
    set<string>store;
    char input[210];
    while(scanf("%s",input)!=EOF)
    {
        string save="";
        for(int i=0;i<=strlen(input);i++)
            {
                char ch=tolower(input[i]);
                if(isalpha(ch))
                    save+=ch;
                else if(save!="")
                {
                    store.insert(save);
                    save="";
                }
            }
    }
        for(set<string>::iterator x=store.begin();x!=store.end();x++)
            puts((*x).c_str());
        return 0;
}
