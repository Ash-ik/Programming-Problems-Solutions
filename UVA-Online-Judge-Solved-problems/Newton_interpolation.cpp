#include<bits/stdc++.h>
using namespace std;
double x[100]={1,2,3,4,5,6},fx[100]={0,0.3010,0.4771,0.6021,0.6989,0.7782};
double recursive(int low,int high)
{
    if(low==high-1) return (fx[high]-fx[low])/(x[high]-x[low]);

    return (recursive(low+1,high)-recursive(low,high-1))/(x[high]-x[low]);
}
double newtonInterpolation(int order,double X)
{
    double temp=0,sum=fx[0];
    int i,j;
    for(i=1;i<=order;i++)
    {
        temp=recursive(0,i);
        j=i;
        while(j--)
            temp=temp*(X-x[j]);

        sum=sum+temp;

    }
    return sum;

}
int main()
{
    int order;
    double x;
    cout<<"Enter order and value x to dermine f(x):";
    cin>>order>>x;
    cout<<"f(x) using Newton Interpolation: "<<newtonInterpolation(order,x)<<endl;
}
