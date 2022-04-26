#include<bits/stdc++.h>
using namespace std;
int top=-1;
struct mystack
{
    int *arr;
    int capacity;
    int top;
    mystack(int c)
    {
        arr=new int[c];
        capacity =c;
        top= -1;
    }
    
    void push(int val)
    {
        if(top == capacity-1)
        {
            cout<<"Stack is full";
        }
        else
        {
            top++;
            arr[top]=val;
        }
    }

    int pop()
    {
        if(top== -1)
        {
            return INT_MIN;
        }
        int  ans=arr[top];
        top--;
        return ans;
    }

    int peek()
    {
        if(top==-1)
        {
            cout<<"Stack is Empty"<<endl;
            return INT_MIN;
        }
        return arr[top];
    }
    int size()
    {
        return top+1;
    }
    bool isEmpty()
    {
        if(top== -1)
            return true;
        return false;
    }
};


int main()
{
    mystack *st= new mystack(5);
    st->push(10);
    st->push(20);
    cout<<st->peek()<<endl;
    cout<<st->pop()<<endl;
    st->push(30);
    st->push(40);
    cout<<st->size()<<endl;
    cout<<st->isEmpty()<<endl;
    return 0;
}
