#include<iostream>
using namespace std;
template<class T>

void SwapValues(T& a,T& b)
{
    T temp=a;
    a=b;
    b=temp;
}
int main()
{
    float a=10.2,b=2.5;
    SwapValues(a,b);
    cout<<a<<" "<<b;
    cout<<SwapValues(a,b);
}
