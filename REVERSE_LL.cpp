#include <bits/stdc++.h>
using namespace std;

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };


LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
          LinkedListNode<int> *prev=NULL;
       
        LinkedListNode<int> *current = head;
          LinkedListNode<int> *forward;
        
        while(current){
        forward  =current->next;
            current->next=prev;
            prev=current;
            current = forward;
           
            
        }
        
           head=prev;
        
        
        return head;
}