#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
bool IsPrime(int num)
{
     int sRoot,i;
    if(num<1)
        return 0;
    if(num==2 ||num==1)
        return 1;
    if(num%2==0)
        return 0;
    sRoot=sqrt(num*1.0);
    for(i=3;i<=sRoot;i+=2)
    {
        if(num%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    clock_t start,end;
    start=clock();
    for(int i=0; i<=100000; i++)
        IsPrime(i);
    end=clock();
    cout<<"Version 1 takes "<<end-start<<" msec"<<endl;
}
