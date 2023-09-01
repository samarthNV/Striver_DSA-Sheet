// Brute force approach

// Calculate max numbers on both side for every elemnet of array
// T.O. = O(n2), S.C. = O(1)
// ans = min(left[i], right[i]) - a[i];

// Better Approach
// T.O. = O(n), S.C. = O(2n)
// Calculate max and min in different arrays for each element of array using prefix sum

// Optimal Solution
// T.O. = O(n), S.C. = O(1)

    // int trap(vector<int>& height) {
    //     int left = 0;
    //     int right = height.size() - 1;
    //     int res = 0;
    //     int leftMax = 0;
    //     int rightMax = 0;
    //     while(left <= right){
    //         if(height[left] <= height[right]){
    //             if(height[left] > leftMax){
    //                 leftMax = height[left];
    //             }else{
    //                 res += leftMax - height[left];
    //             }
    //             left++;
    //         }else{
    //             if(height[right] > rightMax){
    //                 rightMax = height[right];
    //             }else{
    //                 res += rightMax - height[right];
    //             }
    //             right--;
    //         }
    //     }
    //     return res;
    // }
