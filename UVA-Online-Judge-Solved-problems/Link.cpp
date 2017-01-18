#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

typedef struct node NODE;
NODE *ptr1, *ptr2, *ptr3, *start, *null;

class LinkedList
{
public:
    void createList();
    void createNode(int);
    void displayList();
};

void LinkedList::createNode(int val)
{
    ptr1 = new NODE;
    ptr1->data = val;
    ptr1->next = NULL;

}

void LinkedList::createList()
{
    int value;
    cout<< "Enter value: \n";
    cin>>value;
    createNode(value);
    start = ptr1;
    //ptr2->next = NULL;
    ptr2=ptr1;


    while(cin>>value && value>0 )
    {
        createNode(value);
        ptr2->next = ptr1;
        ptr2 = ptr1;
    }

    if(value == 0)
    {
        ptr2->next = start;
        //ptr1->next = NULL;
    }
}


void LinkedList::displayList()
{

    for(ptr3=start; ptr3->next!=start; ptr3=ptr3->next)
        cout<<ptr3->data<<" ";

        cout<<ptr3->data<<" ";

}


int main()
{
    LinkedList l;
    l.createList();
    l.displayList();

}
