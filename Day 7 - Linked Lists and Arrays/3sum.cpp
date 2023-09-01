// Better approach

        // vector<vector<int>> threeSum(vector<int>& nums) {
        // int size = nums.size();
        // set<vector<int>> ans;
        // for(int i = 0; i < size; i++){
        //     set<int> st;
        //     for(int j = i+1; j < size; j++){
        //         int third = -(nums[i] + nums[j]);
        //         if(st.find(third) != st.end()){
        //             vector<int> temp = {nums[i], nums[j], third};
        //             sort(temp.begin(), temp.end());
        //             ans.insert(temp);
        //         }
        //         st.insert(nums[j]); 
        //     }
        // }
        // vector<vector<int>> res(ans.begin(), ans.end());
        // return res;
        // }

// Optimal Solution

    // vector<vector<int>> threeSum(vector<int>& nums) {

    //     int size = nums.size();
    //     vector<vector<int>> ans;
    //     sort(nums.begin(), nums.end());
    //     for(int i = 0; i < size; i++){
    //         if(i > 0 && nums[i]==nums[i-1]){
    //             continue;
    //         }
    //         int j = i+1;
    //         int k = size - 1;
    //         while(j < k){
    //             int sum = nums[i]+nums[j]+nums[k];
    //             if(sum == 0){
    //                 vector<int> temp = {nums[i], nums[j], nums[k]};
    //                 ans.push_back(temp);
    //                 k--;
    //                 j++;
    //                 while(j < k && nums[j]==nums[j-1]){
    //                     j++;
    //                 }
    //                 while(j < k && nums[k]==nums[k+1]){
    //                     k--;
    //                 }
    //             }else if(sum > 0){
    //                 k--;
    //             }else{
    //                 j++;
    //             }
    //         }
    //     }
    //     return ans;
    // }