//define NULL
#include <stddef.h>
 
 // Definition for singly-linked list.
 struct ListNode {
      int val;
     struct ListNode *next;
 };

struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode *pre = (struct ListNode*)malloc(sizeof(struct ListNode));
    pre->next = head;
    struct ListNode *ptr = pre;
    while(ptr->next != NULL ){
        if(ptr ->next->val ==  val) ptr->next = ptr->next->next;
        else ptr = ptr->next;
    }
    return pre->next;
}