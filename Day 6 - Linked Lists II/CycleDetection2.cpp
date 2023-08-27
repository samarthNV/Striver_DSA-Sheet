// Using hashmap

    // ListNode *detectCycle(ListNode *head) {
    //     if(head == NULL || head -> next == NULL){
    //         return 0;
    //     }
    //     unordered_map<ListNode*, int> mp;
    //     while(head != NULL){
    //         mp[head]++;
    //         if(mp[head]>1){
    //             return head;
    //         }
    //         head = head -> next;
    //     }
    //     return 0;
    // }

// Floyd detection

    // ListNode *detectCycle(ListNode *head) {
    //     if(fast==NULL ||fast->next==NULL){
    //         return 0;
    //     }

    //     ListNode *slow =head,*fast=head;

    //     while(fast!=NULL && fast->next!=NULL){
    //         slow =slow->next;
    //         fast =fast->next->next;
    //         if(fast==slow){
    //             break;
    //         }
    //     }
    //     ListNode *curr =head;
    //     ListNode *temp =fast;
    //     else{
    //         while(curr!=temp){
    //             curr =curr->next;
    //             temp =temp->next;
    //         }
    //     }
    //     return curr;
    // }