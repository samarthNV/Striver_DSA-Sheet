// Optimal Solution

    // int uniquePaths(int m, int n) {

    //     int num = m + n - 2;
    //     int r = m-1;
    //     double res = 1;
    //     for(int i = 1; i <= r; i++){
    //         res = res * (num-r+i)/i;
    //     }

    //     return (int)res;

    // }

// Using Dynamic Programming

    // int countPath(int i, int j, int m, int n, vector<vector<int>> &dp){
    //     if(i == m-1 && j == n-1){
    //         return 1;
    //     }
    //     if(i >= m || j >= n){
    //         return 0;
    //     }
    //     if(dp[i][j] != -1){
    //         return dp[i][j];
    //     }
    //     dp[i][j] = countPath(i+1, j, m, n, dp) + countPath(i, j+1, m, n, dp);
    //     return dp[i][j];
    // }

    // int uniquePaths(int m, int n) {

    //     vector<vector<int>> dp(m, vector<int>(n, -1));
    //     int ans = countPath(0, 0, m, n, dp);
    //     return ans;

    // }