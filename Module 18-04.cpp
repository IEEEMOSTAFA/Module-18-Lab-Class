//This code is only for Doubly linked list
#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node*nxt;
    node*prev;

};
class DoublyLinkedList
{
public:
    node*head;
    DoublyLinkedList()
    {
        head=NULL;
    }
    node*CreateNewNode(int data)
    {
        node*newnode=new node;
        newnode->data=data;
        newnode->nxt=NULL;
        return newnode;
    }
    void InsertAtHead(int data)
    {
        node*newnode =CreateNewNode(data);
        if(head==NULL)
        {
            head=newnode;
            return;
        }
        newnode->nxt=head;
        head->prev=newnode;
        head=newnode;
    }
    void Traverse()
    {
        node*a=head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->nxt;
        }
        cout<<"\n";
    }



};
int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(30);
    dl.InsertAtHead(20);
    dl.InsertAtHead(10);

    dl.Traverse();

    return 0;
}
