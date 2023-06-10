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



bool isPalindrome(LinkedListNode<int> *head) {
   vector<int> arr;
   LinkedListNode<int>*temp=head;
   while(temp){
     arr.push_back(temp->data);
     temp=temp->next;
   }
   int i=0,j=arr.size()-1;
   while(i<j){
       if(arr[i]!=arr[j]) return false;
       i++;
       j--;
   }

   return true;

}