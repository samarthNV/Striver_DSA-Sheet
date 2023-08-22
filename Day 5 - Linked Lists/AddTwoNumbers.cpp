// Brute force Approach

// void insertValue(ListNode* &head, ListNode* &tail, int value){
//     ListNode* temp = new ListNode(value);

//     if(head == NULL){
//         head = temp;
//         tail = temp;
//     }else{
//         tail -> next = temp;
//         tail = temp;
//     }
// }

// ListNode* add(ListNode* &first, ListNode* &second){
//     int carry = 0;

//     ListNode* head1 = NULL;
//     ListNode* tail1 = NULL;

//     while(first != NULL || second != NULL || carry != 0){

//         int val1 = 0;
//         int val2 = 0;

//         if(first != NULL){
//             val1 = first -> val;
//         }

//         if(second != NULL){
//             val2 = second -> val;
//         }

//         int sum = val1 + val2 + carry;

//         int digit = sum%10;
        
//         insertValue(head1, tail1, digit);

//         carry = sum/10;
//         if(first != NULL){
//             first = first -> next;
//         }
//         if(second != NULL){
//             second = second -> next;
//         }

//     }

//     return head1;
// }

// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

//         ListNode* ans = add(l1, l2);

//         return ans;
//     }
// };