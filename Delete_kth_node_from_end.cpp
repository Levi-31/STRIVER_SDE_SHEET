
#include <bits/stdc++.h>

using namespace std ;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};


//THE FAST POINTER WILL MOVE K NODES IN START AND EVENTUALLY WILL TRAVEL "LENGTH DISTANCE"
// THE SLOW POINTER WILL TRAVEL "LENGTH - N DISTANCE"
// DELETING KTH NODE FROM END IS DELETING N-K+1TH NODE FROM START HENCE THE SLOW POINTER WILL POINT THE NPDE JUST BEFORE THE NODE TO BE DELETED

Node* removeKthNode(Node* head, int k)

{
    if(head==NULL) return head;

    Node *dummy=new Node();

    dummy->next=head;

    Node *fast=dummy;
    Node *slow=dummy;


    for(int i=0;i<k;i++)
     fast=fast->next;

    while (fast->next!=NULL) {
      fast = fast->next;
      slow = slow->next;
    }

    slow->next = slow->next->next;

    return dummy->next;
}
