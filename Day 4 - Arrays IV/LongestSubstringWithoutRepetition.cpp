// Optimal Solution

    // int lengthOfLongestSubstring(string s) {
    //     int len = s.size();
    //     int maxi = 0;
    //     int left = 0;
    //     unordered_set<char> st;
    //     for(int right = 0; right < len; right++){
    //         while(st.count(s[right]) != 0){
    //             st.erase(s[left++]);
    //         }
    //         st.insert(s[right]);
    //         maxi = max(maxi, right - left + 1);
    //     }
    //     return maxi;
    // }