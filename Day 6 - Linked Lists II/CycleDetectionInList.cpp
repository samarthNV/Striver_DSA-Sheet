// Using Hashmap

    // bool hasCycle(ListNode *head) {
    //     unordered_map<ListNode*, int> mp;
    //     while(head != NULL){
    //         mp[head]++;
    //         if(mp[head]>1){
    //             return true;
    //         }
    //         head = head -> next;
    //     }
    //     return false;
    // }

// Using two pointer approach

    // bool hasCycle(ListNode *head) {

    //     if(head == NULL)
    //         return false;
        
    //     ListNode *fast = head;
    //     ListNode *slow = head;
        
    //     while(fast != NULL && fast ->next != NULL)
    //     {
    //         fast = fast->next->next;
    //         slow = slow->next;
            
    //         if(fast == slow)
    //             return true;

    //     }
        
    //     return false;
    // }