#include <bits/stdc++.h>

using namespace std ;

  class Node {
  public:
     int data;
     Node *next;
   Node() : data(0), next(nullptr) {}
    Node(int x) : data(x), next(nullptr) {}
     Node(int x, Node *next) : data(x), next(next) {}
  };
 

Node *rotate(Node *head , int k) {
   if(head == NULL or head->next == NULL or k==0) return head;
 
       Node* temp1=head;
       int length_of_List = 0;
        while(temp1 != NULL){
           temp1 = temp1->next;
           length_of_List++;
       }
 
        if(k%length_of_List == 0) return head;
 
        k = length_of_List-(k%length_of_List);
 
        Node* temp=head;
       while(--k) temp = temp->next;
 
        Node* breakNode_newList_head = temp->next;
        temp->next = NULL;
        Node* travers = breakNode_newList_head;
 
        while(travers->next !=NULL) travers = travers->next;
        
        travers->next = head;
        return breakNode_newList_head;


}