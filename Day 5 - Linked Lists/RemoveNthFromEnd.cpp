// Brute force Approach

    // ListNode* removeNthFromEnd(ListNode* head, int n) {
    //     if (!head || !head->next) {
    //         return nullptr;
    //     }
    //     int count = 0;
    //     ListNode* temp = head;
    //     while(temp){
    //         count++;
    //         temp = temp -> next;
    //     }
    //     if (n >= count) {
    //         return head->next;
    //     }
    //     int num = count - n - 1;
    //     temp = head;
    //     while(num--){
    //         temp = temp -> next;
    //     }
    //     temp -> next = temp -> next -> next;
    //     return head;
    // }

// Optimal Solution

    // ListNode* removeNthFromEnd(ListNode* head, int n) {

    //     ListNode* slow = head;
    //     ListNode* fast = head;

    //     while(n--){
    //         fast = fast -> next;
    //     }

    //     if(fast==NULL){
    //         return slow->next;
        
    //     }

    //     while(fast -> next){
    //         fast = fast -> next;
    //         slow = slow -> next;
    //     }

    //     slow->next = slow->next->next;
    //     return head;

    // }