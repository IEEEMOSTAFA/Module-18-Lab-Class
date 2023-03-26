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


    void Insert(int index,int data)
    {
        if(index==0)
        {
            InsertAtHead(data);
            return;
        }
        node*a =head;
        int cur_index=0;
        while(cur_index!=index-1)
        {

            if(a==NULL)
            {
                break;
            }
            a=a->nxt;
            cur_index++;

        }
        if(a==NULL)
        {
            cout<<"can't insert \n ";
             return;
        }
        node*newnode =CreateNewNode(data);//
        newnode->nxt=a->nxt;//
        node*b=a->nxt;//
        if(b!=NULL)//
        {
            b->prev=newnode;
        }
        a->nxt=newnode;
        newnode->prev=a;
    }
};
int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(30);
    dl.InsertAtHead(20);
    dl.InsertAtHead(10);

    dl.Traverse();
dl.Insert(1,100);
dl.Insert(4,200);
dl.Traverse();
    return 0;
}

