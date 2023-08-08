// Optimal Solution

    // vector<vector<int>> fourSum(vector<int>& nums, int target) {
    //     int size = nums.size();
    //     sort(nums.begin(), nums.end());
    //     vector<vector<int>> ans;
    //     for(int i = 0; i < size; i++){
    //         if(i > 0 && nums[i] == nums[i-1]){
    //             continue;
    //         }
    //         for(int j = i+1; j < size; j++){
    //             if(j > i+1 && nums[j] == nums[j-1]){
    //                 continue;
    //             }
    //             int k = j+1;
    //             int l = size - 1;
    //             while(k < l){
    //                 long long int sum = (long long)nums[i] + (long long)nums[j];
    //                 sum += (long long)nums[k] + (long long)nums[l];
    //                 if(sum == target){
    //                     vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
    //                     ans.push_back(temp);
    //                     k++;
    //                     l--;
    //                     while(k < l && nums[k] == nums[k-1]){
    //                         k++;
    //                     }
    //                     while(k < l && nums[l] == nums[l+1]){
    //                         l--;
    //                     }
    //                 }else if(sum > target){
    //                     l--;
    //                 }else{
    //                     k++;
    //                 }
    //             }
    //         }
    //     }
    //     return ans;
    // }