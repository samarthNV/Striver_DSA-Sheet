// Better Solution

    // int majorityElement(vector<int>& nums) {
    //     int size = nums.size();
    //     unordered_map<int, int> mp;
    //     for(int i = 0; i < size; i++){
    //         mp[nums[i]]++;
    //     }
    //     for(auto i : mp){
    //         if(i.second > size/2){
    //             return i.first;
    //         }
    //     }
    //     return -1;
    // }