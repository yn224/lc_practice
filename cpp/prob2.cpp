#include <iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// Runtime: 89.84% - 36 ms
// Memory Usage: 81.42% - 71.4 MB
ListNode* addTwoNumbers_s1(ListNode* l1, ListNode* l2) {
  if ( l1 == nullptr ) {
    return l2;
  }
  if ( l2 == nullptr ) {
    return l1;
  }
  
  int carry = 0;
  
  ListNode* res = new ListNode();
  ListNode* head = res;
  
  while ( l1 != nullptr && l2 != nullptr ) {
    carry += l1->val + l2->val;
    res->next = new ListNode(carry % 10);
    carry /= 10;
    res = res->next;
    l1 = l1->next;
    l2 = l2->next;
  }
  
  // n1 finished
  if ( l2 != nullptr ) {
    while ( l2 != nullptr ) {
      carry += l2->val;
      res->next = new ListNode(carry % 10);
      carry /= 10;
      res = res->next;
      l2 = l2->next;
    }
    if ( carry != 0 ) {
      res->next = new ListNode(carry);
    }
    return head->next;
  }
  
  // n2 finished
  if ( l1 != nullptr ) {
    while ( l1 != nullptr ) {
      carry += l1->val;
      res->next = new ListNode(carry % 10);
      carry /= 10;
      res = res->next;
      l1 = l1->next;
    }
    if ( carry != 0 ) {
      res->next = new ListNode(carry);
    }
    return head->next;
  }
  if ( carry != 0 ) {
    res->next = new ListNode(carry);
  }
  return head->next;
}

int main( void ) {
  return 0;
}