// Optimal Solution 

    // ListNode* reverseKGroup(ListNode* head, int k) {
    //     if(head == NULL || k == 1){
    //         return head;
    //     }
    //     ListNode* dummy = new ListNode(0);
    //     dummy -> next = head;
    //     ListNode *curr = dummy, *prev = dummy, *nex = dummy;
    //     int cnt = 0;
    //     while(curr -> next != NULL){
    //         curr = curr -> next;
    //         cnt++;
    //     }
    //     while(cnt >= k){
    //         curr = prev -> next;
    //         nex = curr -> next;
    //         for(int i = 1; i < k; i++){
    //             curr -> next = nex -> next;
    //             nex ->next = prev -> next;
    //             prev -> next = nex;
    //             nex = curr -> next; 
    //         }
    //         prev = curr;
    //         cnt -= k;
    //     }
    //     return dummy -> next;
    // }