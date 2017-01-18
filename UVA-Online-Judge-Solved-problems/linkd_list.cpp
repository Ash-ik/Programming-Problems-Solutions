#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
typedef struct node NODE;
NODE *start,*ptr1,*ptr2,*ptr3;

class LinkedList
{
public:
    void createList();
    void createNode(int);
    void display();
};

void LinkedList::createNode(int value)
{
    ptr1=new NODE;
    ptr1->data=value;
    ptr1->next=NULL;
}

void LinkedList::createList()
{
    int value;
    cin>>value;
    createNode(value);
    start=ptr1;
    ptr2=ptr1;
    while(cin>>value &&value>0)
    {
        createNode(value);
        ptr2->next=ptr1;
        ptr2=ptr1;
    }

}
void LinkedList::display()
{
    for(ptr3=start;ptr3!=NULL;ptr3=ptr3->next)
    cout<<ptr3->data<<" ";

}


int main()
{
    LinkedList L;
    L.createList();
    L.display();
}
