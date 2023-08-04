// Optimal Solution

    // vector<vector<int>> merge(vector<vector<int>>& intervals) {
    //     vector<vector<int>> ans;
    //     int size = intervals.size();
    //     sort(intervals.begin(), intervals.end());
    //     int ind = 0;
    //     ans.push_back(intervals[0]);
    //     for(int i = 1; i < size; i++){
    //         if(ans[ind][1] >= intervals[i][0]){
    //             if(ans[ind][1] < intervals[i][1]){
    //                 ans[ind][1] = intervals[i][1];
    //             }
    //         }else{
    //             ans.push_back(intervals[i]);
    //             ind++;
    //         }
    //     }
    //     return ans;
    // }