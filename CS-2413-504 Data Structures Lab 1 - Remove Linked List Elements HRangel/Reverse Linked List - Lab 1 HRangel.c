//define NULL in VSC
#include <stddef.h>

 // Definition for singly-linked list.
 struct ListNode {
     int val;
     struct ListNode *next;
 };
 
struct ListNode* reverseList(struct ListNode* head) {
        struct ListNode* rev = NULL;
    
    while(head){
        struct ListNode* ptr = head->next;
        head->next = rev;
        rev = head;
        head = ptr;
    }
    return rev;
}
