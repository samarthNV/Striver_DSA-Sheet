// Brute force approach

    // bool check(vector<int> v){
    //     int s = v.size();
    //     int f = 0;
    //     int b = s - 1;
    //     while(f<b){
    //         if(v[f] != v[b]){
    //             return false;
    //         }
    //         f++;
    //         b--;
    //     }
    //     return true;;
    // }

    // bool isPalindrome(ListNode* head) {
    //     if(head == NULL || head -> next == NULL){
    //         return true;
    //     }
    //     ListNode* temp = head;
    //     vector<int> ans;
    //     while(temp != NULL){
    //         ans.push_back(temp -> val);
    //         temp = temp -> next;
    //     }

    //     return check(ans);
    // }

// Recursive approach

    // bool flag;
    // ListNode*Head;
    // void checkpalindrome(ListNode* Revhead){
    //     if(Revhead==NULL){
    //         return;
    //     }
    //      checkpalindrome(Revhead->next);
    //      if(Revhead!=NULL){
    //          if(Revhead->val!=Head->val){
    //              flag=false;
    //          }
    //          Head=Head->next;
    //      }
    // }
    // bool isPalindrome(ListNode* head) {
    //     flag=true;
    //     Head=head;
    //     checkpalindrome(head);
    //     return flag;
    // }

// Optimal Solution

    // Using slow and fast, slow reaches middle, reverse from middle and check