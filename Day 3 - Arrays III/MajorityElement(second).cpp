// Better Solution

    // vector<int> majorityElement(vector<int>& nums) {
    //     int size = nums.size();
    //     unordered_map<int, int> mp;
    //     vector<int> ans;
    //     for(int i = 0; i < size; i++){
    //         mp[nums[i]]++;
    //     }
    //     for(auto i : mp){
    //         if(i.second > size/3){
    //             ans.push_back(i.first);
    //         }
    //     }
    //     return ans;
    // }