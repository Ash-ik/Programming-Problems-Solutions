#include<stdio.h>
#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main()
{
    freopen("dataN.txt","r",stdin);
    int t;
    while(scanf("%d",&t)==1)
    {
        int task,num;
        bool is_stack=true,is_priority_queue=true,is_queue=true;
        stack<int>insert_stack;
        queue<int>insert_queue;
        priority_queue<int>insert_priority_queue;
        for(int i=0;i<t;i++)
        {
            scanf("%d %d",&task,&num);
        switch(task)
        {
        case 1:
            if(is_stack)
            insert_stack.push(num);
            if(is_priority_queue)
            insert_priority_queue.push(num);
            if(is_queue)
            insert_queue.push(num);
            break;
        case 2:
            if(insert_stack.empty() || insert_stack.top()!=num)
                is_stack=false;
            else insert_stack.pop();
            if(insert_queue.empty()||insert_queue.front()!=num)
            is_queue=false;
            else insert_queue.pop();
            if(insert_priority_queue.empty()||insert_priority_queue.top()!=num)
                is_priority_queue=false;
            else insert_priority_queue.pop();
            break;
            default:break;
        }
        }
        if((is_stack && is_priority_queue) ||(is_stack && is_queue)||(is_queue && is_priority_queue))
            printf("not sure\n");
        else if(is_stack==is_priority_queue==is_queue==false)
            printf("impossible\n");
        else if(is_stack)
            printf("stack\n");
        else if(is_priority_queue)
            printf("priority queue\n");
        else
            printf("queue\n");
    }
    return 0;
}
