#include <bits/stdc++.h>

using namespace std ;
#define bye    return 0



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




bool detectCycle(Node *head)
{
	Node *slow=head;
    Node *fast=head;

    while(fast && fast->next){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow) return true;
    }

    return false;
}