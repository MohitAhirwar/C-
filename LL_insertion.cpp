#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
      int data;
      Node *next;
};

/* Insert at the end of the linked list*/
void Insert(Node **head , int item) 
{
    //First we need to allocate the memory for the new node to insert
    Node *New = new Node();
    Node *last = *head;
    New->data = item;
    New->next = NULL;

    if(*head == NULL)
    {
        *head = New;
        return;
    }

    while(last->next !=NULL)
    {
        last = last->next;
    }
    last->next = New;
    return;
}
/* Insert at the beginning of the linked list*/
void Insertatbeg(Node** root , int data)
{
    Node *head = new Node(); 
    head->data = data;
    head->next = *root;
    *root = head;
}
/* Insert after a particular node(i.e, in between) of the linked list*/
void Insertafterprev(Node *prev , int data)
{
    if(prev==NULL)
    {
        cout<<"prev node cannot be null";
        return;
    }
    Node *bet = new Node();
    bet->data = data;
    bet->next = prev->next;
    prev->next = bet;
}

int main()
{
    Node *a=NULL,*b=NULL,*c=NULL;

    a = new Node();
    b = new Node();
    c = new Node();

    a->data =1;
    a->next =b;

    b->data=2;
    b->next=c;

    c->data=4;
    c->next=NULL;
    Insert(&a,5);
    Insert(&a,6);
    Insertatbeg(&a,0);
    Insert(&a,7);
    Insertafterprev(b,3);
    while(a != NULL)
    {
        cout<<a->data<<" ";
        a = a->next;
    }
}
