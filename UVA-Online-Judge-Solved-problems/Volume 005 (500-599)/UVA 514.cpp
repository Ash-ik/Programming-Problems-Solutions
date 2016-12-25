#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stack>
using namespace std;

void solve(stack<int>rails,int temp)
{
    stack<int>station;
    while(temp)
                {
                    if(rails.size()==0 &&station.top()!=temp)
                        break;
                    while(rails.size() && rails.top()==temp)
                    {
                        temp--;
                        rails.pop();
                    }
                    while(station.size() &&station.top()==temp)
                    {
                        temp--;
                        station.pop();
                    }
                if(rails.size() && rails.top()!=temp)
                 {
                        station.push(rails.top());
                        rails.pop();
                }

                }

                if(temp)
                    puts("No");
                else
                    puts("Yes");
}

int z=0,temp;
char input[30000],*x;
int main()
{
    stack<int>rails;
    while(gets(input) && !(strlen(input)==1 &&input[0]=='0'))
    {
        temp=atoi(input);

        while(gets(input) &&!(strlen(input)==1 &&input[0]=='0'))
        {
            for(x=strtok(input," "); x ;x=strtok(NULL," "))
                rails.push(atoi(x));

                solve(rails,temp);

                while(rails.size())
                    rails.pop();
            }
            puts("");
    }
    return 0;
}
