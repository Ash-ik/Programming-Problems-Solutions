#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

struct Tnode
{
    char info;
    Tnode *l;
    Tnode *r;
};
struct Qnode
{
    Tnode *data;
    Qnode *neQ;
};
struct Snode
{
    Tnode *data;
    Snode *neS;
};

typedef struct Tnode *T;
T root,R,P,L,pt;
typedef struct Qnode *Q;
Q start,q;
typedef struct Snode *S;
S st,hd;

class tree
{
public:
    tree();
    void create();
    void push(T);
    T pop();
    void put(T);
    T get();
    void in_order_algo(T ptr);
    void in_order_recursive(T ptr);
    void pre_order_recursive(T ptr);
    void post_order_recursive(T ptr);
};

tree :: tree()
{
    root=NULL;
    start=NULL;
}
void tree :: put(T leaf)
{
    Q qt;
    qt=new Qnode;
    qt->data=leaf;
    qt->neQ=NULL;
    if(start==NULL)
    {
        start=qt;
        q=qt;
    }
    else
    {
        q->neQ=qt;
        q=qt;
    }
}
T tree :: get()
{
    T leaf;
    leaf=new Tnode;
    leaf=start->data;
    start=start->neQ;
    return leaf;
}
void tree :: create()
{
    char ch;

    cout<<"\nEnter root : ";
    cin>>ch;

    P=new Tnode;
    P->l=NULL;
    P->r=NULL;
    P->info=ch;

    root=P;
    put(P);

    while(start!=NULL)
    {
        P=get();
        cout<<"\nEnter left child : ";
        cin>>ch;
        if(ch!='0')
        {
            L=new Tnode;
            L->l=NULL;
            L->r=NULL;
            L->info=ch;
            put(L);
            P->l=L;
        }
        cout<<"\nEnter right child : ";
        cin>>ch;
        if(ch!='0')
        {
            R=new Tnode;
            R->info=ch;
            R->l=NULL;
            R->r=NULL;
            put(R);
            P->r=R;
        }
    }
}
void tree :: push(T leaf)
{
    st=new Snode;
    st->data=leaf;
    st->neS=hd;
    hd=st;
}
T tree :: pop()
{
    T leaf;
    leaf=new Tnode;
    leaf=hd->data;
    hd=hd->neS;
    return leaf;
}

void tree::in_order_algo(T ptr)
{
    if(root==NULL)
    {
        cout<<"Tree is Empty"<<endl;
        return;
    }

    if(ptr!=NULL)
    {
        in_order_algo(ptr->l);
        cout<<ptr->info<<" ";
        in_order_algo(ptr->r);
    }


}

void tree::in_order_recursive(T ptr)
{
    if(root==NULL)
    {
        cout<<" Tree is Empty"<<endl;
        return;
    }

    /*if(ptr->r!=NULL)
        {
            in_order(ptr->r);
            cout<<ptr->info<<" ";
        }*/

    if(ptr!=NULL)
    {
        in_order_recursive(ptr->l);
        cout<<ptr->info<<" ";

    }

     if(ptr->r!=NULL)
        {
            in_order_recursive(ptr->r);
            cout<<ptr->info<<" ";
        }


}

int main()
{
    tree tr;
    tr.create();
    tr.in_order_algo(root);
    tr.in_order_recursive(root);
    //getch();
    return 0;
}
