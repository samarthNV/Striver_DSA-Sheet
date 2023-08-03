// Optimal Solution

    // vector<int> generateRow(int row){
    //     long long var = 1;
    //     vector<int> ans;
    //     ans.push_back(var);
    //     for(int col = 1; col < row; col++){
    //         var = var*(row-col);
    //         var = var/col;
    //         ans.push_back(var);
    //     }
    //     return ans;
    // }

    // vector<vector<int>> generate(int numRows) {
    //     vector<vector<int>> res;
    //     for(int i = 1; i <= numRows; i++){
    //         res.push_back(generateRow(i));
    //     }
    //     return res;
    // }