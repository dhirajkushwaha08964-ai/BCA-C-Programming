 /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* curr = head;
    struct ListNode* next_node = NULL;

    while (curr != NULL) {
        // Agle node ka address save karein
        next_node = curr->next;
        
        // Current node ka pointer piche (prev) ki taraf modein
        curr->next = prev;
        
        // prev aur curr ko ek kadam aage badhayein
        prev = curr;
        curr = next_node;
    }

    // Loop khatam hone par prev naya head hoga
    return prev;
}
