

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


Node *firstNode(Node *head)
{
    Node *fast=head;
    Node *slow=head;
    // bool flag;
    while(fast && fast->next ){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            // flag=true;
            break;
        }

    }


    if( fast ==NULL || fast->next==NULL) return NULL;

    else{
        slow=head;
        while(fast!=slow){
            fast=fast->next;
            if(fast==slow)break;
            slow=slow->next;
        }
    }

    return slow;




















    
}