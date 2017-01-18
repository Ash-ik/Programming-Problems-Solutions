#include<iostream>
using namespace std;
int main()
{
    int a=5,b;
    cin>>b;
   try{
        if(b==0)
        throw ;
        cout<<a/b;
        }
        catch(float)
    {
        cout<<"exception occured\n";
    }
    catch(char)
    {
        cout<<"exception\n";
    }
    catch(...)
    {
        cout<<"divide-by-zero exception occured\n";
    }
}
