#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
      int data;
      Node *next;
};

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

    c->data=3;
    c->next=NULL;

    while(a != NULL)
    {
        cout<<a->data<<" ";
        a = a->next;
    }
}
