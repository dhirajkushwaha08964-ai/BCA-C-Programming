 /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    // Ek dummy node banayein taaki edge cases handle karna aasan ho
    struct ListNode dummy;
    dummy.next = NULL;
    struct ListNode* tail = &dummy;

    // Jab tak dono lists mein nodes bache hain, chhota node jodte jayein
    while (list1 != NULL && list2 != NULL) {
        if (list1->val <= list2->val) {
            tail->next = list1;
            list1 = list1->next;
        } else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }

    // Agar kisi ek list mein nodes bach gaye hain, toh seedha unhein jod dein
    if (list1 != NULL) {
        tail->next = list1;
    } else {
        tail->next = list2;
    }

    return dummy.next;
}
