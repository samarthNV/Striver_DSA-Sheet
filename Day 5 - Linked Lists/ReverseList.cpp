// Optimal Solution

    // ListNode* reverseList(ListNode* head) {
        
    //     if(head == NULL || head -> next == NULL){
    //         return head;
    //     }

    //     ListNode* prev = NULL;
    //     ListNode* curr = head;
        
    //     while(curr != NULL){
    //         ListNode* forward = curr -> next;
    //         curr -> next = prev;
    //         prev = curr;
    //         curr = forward;
    //     }

    //     return prev;

    // }