// Better Solution

    // int longestConsecutive(vector<int>& nums) {
    //     int size = nums.size();
    //     sort(nums.begin(), nums.end());
    //     if(size == 0){
    //         return 0;
    //     }
    //     int last_small = INT_MIN;
    //     int cnt = 0, maxi = 1;
    //     for(int i = 0; i < size; i++){
    //         if(nums[i]-1 == last_small){
    //             cnt++;
    //             last_small = nums[i];
    //         }else if(nums[i] != last_small){
    //             cnt = 1;
    //             last_small = nums[i];
    //         }
    //         maxi = max(maxi, cnt);
    //     }
    //     return maxi;
    // }

// Optimal Solution

    // int longestConsecutive(vector<int>& nums) {
    //     int size = nums.size();
    //     if(size == 0){
    //         return 0;
    //     }
    //     unordered_set<int> st;
    //     for(int i = 0; i < size; i++){
    //         st.insert(nums[i]);
    //     }
    //     int maxi = 1;
    //     for(auto i : st){
    //         if(st.find(i-1)==st.end()){
    //             int cnt = 1;
    //             int x = i;
    //             while(st.find(x+1)!=st.end()){
    //                 cnt++;
    //                 x = x + 1;
    //             }
    //             maxi = max(maxi, cnt);
    //         }
    //     }
    //     return maxi;
    // }