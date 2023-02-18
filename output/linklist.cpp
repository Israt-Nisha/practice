#include <bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node* next;
};
class Linklist{
public:
    node * head;
    int size;

    Linklist()
    {
        head=NULL;
        size =0;
    }
    node* creatnewnode(int value)
    {
        node* newnode = new node;
        newnode->data=value;
        newnode->next=NULL;
        size++;
        return newnode;
    }
    int getSize()
    {
        return size;
    }

    void InsertAtHead(int value)
    {
        node * a=creatnewnode(value);
        if(head==NULL)
        {
            head=a;
            return;
        }
        a->next=head;
        head = a;
    }
    int getValue(int index)
    {
        if(index>=size)
        {
            return -1;
        }
        node* a=head;
        for(int i=0;i<index;i++)
        {
            a=a->next;
        }
        return a->data;
        
        
    }
    void Traverse()
    {
        node* a =head;
        while (a!=NULL)
        {
            cout<<a->data<<" ";
            a =a->next;
        }
        cout<<"\n";
        
    }
    void printReverse() {
        
    }

    void swapFirst() {
        if (size < 2) {
            return;
        }
        node* first = head;
        node* second = head->next;
        first->next = second->next;
        second->next = first;
        head = second;
    }




};

int main() {
    
    Linklist l;
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(5);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout<<l.getValue(2)<<"\n";

    cout<<l.getValue(6)<<"\n";

    l.printReverse();
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.printReverse();




    return 0;
}