#include <bits/stdc++.h>
using namespace std;


    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };


LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    // Hare Krishna 
    LinkedListNode<int>* ans; bool f = 1;
    while (head != NULL) {
      LinkedListNode<int> *tmp = new LinkedListNode<int>(head->data);
      if (f)
        ans = tmp, f = 0;
      tmp->next = head->next;
      tmp->random = head->random;
      head = head->next;
      tmp = tmp->next;
    }
    return ans;
}
