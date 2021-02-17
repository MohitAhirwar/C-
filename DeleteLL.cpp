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
void Delete(Node** head_ref,int key)
{
    Node* temp = *head_ref;
    Node* prev = NULL;
     
    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next; // Changed head
        delete temp;            // free old head
        return;
    }
    else
    {
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
 
    if (temp == NULL)
        return;

    prev->next = temp->next;
    delete temp;
    }
}
void Deleteatpos(Node** head , int pos)
{
    if(*head == NULL)
      return;
    
    Node *tmp = *head;

    if(pos == 0)
     {
         *head = tmp->next;
         delete tmp;
         return;
     }

     for(int i=0;tmp!=NULL && i<pos-1 ;i++)
{
    tmp = tmp->next;
}
  if(tmp == NULL || tmp->next == NULL)
  {
      return;
  }
  Node* next = tmp->next->next;

  delete(tmp->next);
  tmp ->next = next;
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
   Deleteatpos(&a,3);
   Deleteatpos(&a,0);

    cout<<"Linked List is:";
    PrintLL(a);
    cout<<"\nReverse Order:";
    fun1(a);
    return 0;
}
