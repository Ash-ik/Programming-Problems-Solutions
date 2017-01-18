#include<iostream>
#define SIZE 100
using namespace std;
template<class stack_type>
class stack
{
    stack_type arr[SIZE];
    int position;
public:
    stack()
    {
        position=0;
    }
    void push(stack_type);
    stack_type pop();
};
template<class stack_type>
void stack<stack_type>::push(stack_type input)
{
    if(position==SIZE)
    {
        cout<<"Stack is full,no place to push anything\n";
        return;
    }
    arr[position]=input;
    position++;
}
template<class stack_type>
stack_type stack<stack_type>::pop()
{
    if(!position)
    {
        cout<<"Stack is empty,nothing to pop\n";
        return 0;
    }
    position--;
    return arr[position];
}
int main()
{
    stack<char> try1,try2;
    try1.push('a');
    try1.push('b');
    cout<<try1.pop();
    cout<<try1.pop();
    cout<<try1.pop();
    return 0;
}
