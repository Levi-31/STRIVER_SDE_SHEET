#include <bits/stdc++.h>
using namespace std;


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



Node* findIntersection(Node *firstHead, Node *secondHead)
{
     unordered_map<Node * ,bool>m;
    Node *temp1=firstHead;
    while(temp1){
        m[temp1]=true;
        temp1=temp1->next;
    }
    Node *temp2=secondHead;

    while(temp2){
        if(m[temp2])return temp2;
        else m[temp2]=true;

        temp2=temp2->next;
    }

    return NULL;
}
