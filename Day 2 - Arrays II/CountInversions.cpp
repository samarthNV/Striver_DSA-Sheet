// Solution

// long long getInversions(long long *arr, int n){
//     long long int count = 0;
//     int len = arr.size();
//     for(int i = 0; i < len; i++){
//         for(int j = i+1; j < len; j++){
//             if(arr[i] > arr[j]){
//                 count++;
//             }
//         }
//     }
//     return count;
// }