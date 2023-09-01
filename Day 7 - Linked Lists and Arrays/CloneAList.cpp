// Optimal Solution

    // Node* copyRandomList(Node* head) {
    //     if (head == NULL) {
    //         return NULL;
    //     }

    //     Node* temp = head;
    //     while(temp != NULL){
    //         int val = temp -> val;
    //         Node* n = new Node(val);
    //         n -> next = temp -> next;
    //         temp -> next = n;
    //         temp = n -> next;
    //     }
        
    //     temp = head;
    //     while(temp != NULL){
    //         if(temp -> random != NULL){
    //             temp -> next -> random = temp -> random -> next;
    //         }
    //         temp = temp -> next -> next;
    //     }
    //     Node* newHead = head -> next;
    //     Node* currOld = head;
    //     Node* currNew = newHead;

    //     while(currOld != NULL){
    //         currOld -> next = currNew -> next;
    //         currOld = currOld -> next;
    //         if(currOld != NULL){
    //             currNew -> next = currOld -> next;
    //             currNew = currNew -> next;
    //         }
    //     }
    //     return newHead;
    // }