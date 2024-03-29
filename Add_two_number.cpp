#include <bits/stdc++.h>

using namespace std ;



 
  class Node {
  public:
       int data;
       Node *next;
       Node() {
           this->data = 0;
           this->next = NULL;
       }
       Node(int data) {
           this->data = data;
           this->next = NULL;
       }
       Node (int data, Node *next) {
        this->data = data;
           this->next = next;
       }
  };
 

Node *addTwoNumbers(Node * l1, Node * l2)
{
     Node * head=new Node();
      Node *temp=head;
        int carry=0;
        while(l1 || l2||carry){
            int sum=0;
            if(l1){
                sum+=l1->data;
                l1=l1->next;
            }
            if(l2){
                sum+=l2->data;
                l2=l2->next;
            }
            sum+=carry;
            carry=sum/10;
            Node *node = new Node(sum%10);
            temp->next=node;
            temp=node;
        }

        return head->next;
}
