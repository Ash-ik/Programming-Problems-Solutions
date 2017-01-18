#include <iostream>
using namespace std;
class stack {
    int data[100];
    int position;
public:
    stack();
    void push(int);
    int pop();
};
stack::stack()
{
position = 0;
}
void stack::push(int input)
{
if(position==100) { cout << "Stack OVERFLOW.\n";
}
data[position]=input;
position++;
}
int stack::pop()
{
if(position==0)
{
cout << "Stack underflow.\n";
return 0;
}
position--;
return data[position];
}
int main()
{
stack a;
int in;
for(int i=0;i<3;i++)
{
        cin>>in;
        a.push(in);
}
cout<<a.pop()<<"\n ";
cout<<a.pop()<<" ";
cout<<a.pop()<<"\n";
return 0;
}
