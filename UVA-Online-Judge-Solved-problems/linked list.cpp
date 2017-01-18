#include<iostream>
using namespace std;
struct list
{
    struct list *next,*prev;
    int value;
};
typedef struct list LIST;
LIST *startPtr,*prevPtr,*nextPtr,*tempPtr,*temp;

class LinkedList
{
    public:
    void createNode(int);
    void createList();
    void displayList();
    void insertElement();
    void deleteElement();
};

void LinkedList::createNode(int info)
{
    nextPtr=new LIST;
    nextPtr->value=info;
    nextPtr->next=NULL;
//    nextPtr->prev=NULL;
}
void LinkedList::createList()
{
    int i=1,value;
    cout<<"Enter "<<i++<<"th value:";
    cin>>value;
    createNode(value);
    prevPtr=startPtr=nextPtr;
    while(cout<<"Enter "<<i++<<"th value:" && cin>>value &&value>-1)
    {
        createNode(value);
        prevPtr->next=nextPtr;
        nextPtr->prev=prevPtr;
        prevPtr=nextPtr;
    }
    if(value<0)
    {
        nextPtr->next=NULL;

    }
}
void LinkedList::displayList()
{
    for(tempPtr=startPtr;tempPtr!=NULL;tempPtr=tempPtr->next);

        for(;tempPtr!=startPtr;tempPtr=tempPtr->prev)
        cout<<tempPtr->value<<" ";
        cout<<"\n\n";
}
void LinkedList::insertElement()
{
    int option,data;
    while(cout<<"\n\n\n\t\tMAIN MENU(Insertion)\n\n\t\t1)insert at first\n\t\t2)insert at last\n\t\t3)insert before specific value\n\t\t4)insert after specific value\n\t\t5)Exit\n\nEnter your choice:" &&cin>>option &&option!=5)
    {
        if(option==1)
        {
            cout<<"Enter a value to insert at first:";
            cin>>data;
            createNode(data);
            nextPtr->next=startPtr;
            startPtr=nextPtr;
            prevPtr=nextPtr;
        }
        else if(option==2)
        {
            cout<<"Enter a value to insert at last:";
            cin>>data;
            createNode(data);
            prevPtr->next=nextPtr;
            prevPtr=nextPtr;
        }
        else if(option==3)
        {
            cout<<"Enter a value of list to insert before it:";
            cin>>data;
            tempPtr=startPtr;
            do
            {
                temp=tempPtr;
                tempPtr=tempPtr->next;
            }while(tempPtr->value!=data);
            cout<<"Enter a value to insert before "<<data<<" of the list:";
            cin>>data;
            createNode(data);
            nextPtr->next=tempPtr;
            temp->next=nextPtr;
        }
        else if(option==4)
        {
            cout<<"Enter a value of list to insert after it:";
            cin>>data;
            tempPtr=startPtr;
            do
            {
                temp=tempPtr;
                tempPtr=tempPtr->next;
            }while(temp->value!=data);
            //here temp will hold the position of the inputed node and tempPtr will hold the position of next node, and our task is to insert new node between them

            cout<<"Enter a value to insert after "<<data<<" of the list:";
            cin>>data;
            createNode(data);
            nextPtr->next=tempPtr;    //while creating a node we've always put NULL next to nextPtr,but at this case we've pointed to the tempPtr to be the next of the
            temp->next=nextPtr;
        }
        displayList();
    }
}
void LinkedList::deleteElement()
{
    int option,data;
    while(cout<<"\n\n\n\t\tMAIN MENU(Deletion)\n\n\t\t1)delete first element\n\t\t2)delete last element\n\t\t3)delete an element before specific value\n\t\t4)delete an element after specific value\n\t\t5)delete a specific value\n\t\t6)Exit\n\nEnter your choice:" &&cin>>option &&option!=6)
    {
            if(option==1)
            {
                tempPtr=startPtr;
                startPtr=tempPtr->next;
            }
            else if(option==2)
            {
                tempPtr=startPtr;
                do
                {
                    tempPtr=tempPtr->next;
                }while(tempPtr->next!=NULL);
                cout<<tempPtr->value;
                nextPtr=tempPtr;
                nextPtr->next=NULL;
            }
            displayList();
    }
}
int main()
{
    LinkedList a;
    a.createList();
    a.displayList();
    a.insertElement();
    a.deleteElement();
}
