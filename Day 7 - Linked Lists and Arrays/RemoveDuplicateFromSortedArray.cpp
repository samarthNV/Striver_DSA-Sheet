// Better Solution

    // int removeDuplicates(vector<int>& nums) {
    //     set<int> s;
    //     int size = nums.size();
    //     for(int i = 0; i < size; i++){
    //         s.insert(nums[i]);
    //     }
    //     nums.clear();
    //     for(auto i : s){
    //         nums.push_back(i);
    //     }
    //     return s.size();
    // }

// Optimal Solution

    // int removeDuplicates(vector<int>& nums) {
    //     int len = nums.size();
    //     if(len == 0){
    //         return 0;
    //     }
    //     int i = 0;
    //     for(int j = 1; j < len; j++){
    //         if(nums[i] != nums[j]){
    //             i++;
    //             nums[i] = nums[j];
    //         }
    //     }
    //     return i+1;
    // }