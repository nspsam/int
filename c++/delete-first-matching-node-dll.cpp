/**

Given: doubly-linked list
Implement: Remove first element matching a specified key.

1. Duplicates allowed [Unnecessary statement]
2. Define API

**/

class Solution {
  bool deleteFirstMatchingNodeofdll(ListNode **node, int key) {
    
    ListNode **head = node;
    
    if(nullptr == node)
      return false;
    
    ListNode *cur = *node;
    
    while(cur && cur->key != key) {
      cur = cur->next;
    
    bool deleted = false;
    if(cur == *head) {
      
      *head = cur->next;
      *head->prev = nullptr; 
      deleted = true;
    }
    else if (cur != nullptr){
      if(cur->prev != nullptr)
        cur->prev->next = cur->next;
      
      if(cur->next != nullptr)
        cur->next->prev = cur->prev;
      
      deleted = true;
    }
    
    delete cur;
    return result;
  }
}