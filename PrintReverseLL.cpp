/*void fun1(node* head)
{
  if(head == NULL)
    return;
  
  fun1(head->next);
  printf("%d  ", head->data);
} */

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
void fun1(Node* head)
{
if(head == NULL)
    return;

fun1(head->next);
cout << head->data << " ";

}
void PrintLL(Node* a)
{
    while(a != NULL)
    {
        cout<<a->data<<" ";
        a = a->next;
    }
}
int main()
{
    Node *a=NULL;

    a = new Node();

    a->data =1;
    a->next = NULL;

     Insert(&a,2);
     Insert(&a,3);
    Insertatbeg(&a,0);
     Insert(&a,4);

    cout<<"Linked List is:";
    PrintLL(a);
    cout<<"\nReverse Order:";
    fun1(a);
    return 0;
}
