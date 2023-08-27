// Recursive approach

// Node *merge(Node* a, Node* b){
//     Node* res = new Node(0);
//     Node* temp = res;
//     while(a != NULL && b != NULL){
//         if(a -> data < b -> data){
//             temp -> bottom = a;
//             a = a -> bottom;
//         }else{
//             temp -> bottom = b;
//             b = b -> bottom;
//         }
//         temp = temp -> bottom;
//     }
//     if(a){
//         temp -> bottom = a;
//     }else{
//         temp -> bottom = b;
//     }
//     return res -> bottom;
// }    
    
// Node *flatten(Node *root)
// {
//    if(root == NULL || root -> next == NULL){
//        return root;
//    }
//    root -> next = flatten(root -> next);
//    root = merge(root, root -> next);
//    return root;
// }