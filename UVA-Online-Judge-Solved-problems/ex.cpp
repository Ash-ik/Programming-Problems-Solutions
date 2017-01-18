#include<iostream>
#include"project.h"
using namespace std;
int main()
{
    BigInteger a,b,c;
    cout<<"Input two number:";
    cin>>a>>b;
    cout<<"\n\nA ="<<a<<"\nB ="<<b<<"\n\n";

    cout<<"A+B ="<<a+b<<endl;
    cout<<"A-B ="<<a-b<<endl;
    cout<<"A*B ="<<a*b<<endl;
    cout<<"A/B ="<<a/b<<endl;
    cout<<"A%B ="<<a%b<<endl;

    cout<<"\nA++ ="<<a++<<endl;
    cout<<"++B ="<<++b<<endl;
    cout<<"--A ="<<--a<<endl;
    cout<<"B-- ="<<b--<<endl;

    cout<<"\nsqrt(a)="<<a.Sqrt()<<endl;

    if(b<=10000)
    cout<<"B! (factorial) ="<<b.factorial(b)<<endl;
    cout<<"\ngcd(a,b) ="<<a.gcd(a,b)<<endl;
    cout<<"lcm(a,b) ="<<a.lcm(a,b)<<endl;

    if(a<=10000 && b<=10000)
    {
        cout<<"\nAth fibonacci :"<<fibonacci(a)<<endl;
        cout<<"Bth fibonacci :"<<fibonacci(b)<<endl;
    }

    cout<<"\nComparison between A & B :"<<endl;
    if(a<b)
        cout<<"A is less than B\n";
    else if(a>b)
        cout<<"A is greater than B\n";
        else
            cout<<"A is equal to B\n";
    cout<<"\nif A & B is prime or not:\n";
    if(a.isPrime(a))
        cout<<"A is Prime\n";
    else cout<<"A is not Prime\n";
    if(b.isPrime(b))
        cout<<"B is Prime\n";
    else cout<<"B is not Prime\n";
    return 0;
}

