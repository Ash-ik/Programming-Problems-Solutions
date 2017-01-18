#include<iostream>
using namespace std;
struct node
{
int data;
struct node *link;
struct node *plink;
};

struct node *first=NULL, *last=NULL;

void swap(struct node* a,struct node* b)
{
int temp;
temp=a->data;
a->data=b->data;
b->data=temp;
}

void qsort(struct node *low, struct node *high)
{
if(low==NULL || high==NULL || low == high || low->plink == high)
return ;

struct node *pivot=low, *tmp=low->link;
while(tmp != high->link)
{
        if(tmp->data < low->data)
        {
                swap(pivot->link, tmp);
                pivot = pivot->link;
        }
        tmp = tmp->link;
}
swap(low, pivot);
qsort(low, pivot->plink);
qsort(pivot->link, high);
}
int main()
{

}
