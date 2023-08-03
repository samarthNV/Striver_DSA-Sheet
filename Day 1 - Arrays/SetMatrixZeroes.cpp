// Brute force approach

    // void setZeroes(vector<vector<int>>& matrix) {
    //     int m = matrix.size();
    //     int n = matrix[0].size();
    //     vector<int> col(m, -1);
    //     vector<int> row(n, -1);
    //     for(int i = 0; i < m; i++){
    //         for(int j = 0; j < n; j++){
    //             if(matrix[i][j]==0){
    //                 col[i] = 0;
    //                 row[j] = 0;
    //             }
    //         }
    //     }
    //     for(int i = 0; i < m; i++){
    //         for(int j = 0; j < n; j++){
    //             if(col[i]==0 || row[j]==0){
    //                 matrix[i][j] = 0;
    //             }
    //         }
    //     }
    // }

// Optimised Solution 

    // void setZeroes(vector<vector<int>>& matrix) {
    //     int n = matrix.size();
    //     int m = matrix[0].size();
    //     bool flag1 = false, flag2 = false;
    //     for(int i=0; i<n; i++){
    //         if(matrix[i][0] == 0){
    //             flag1 = true;
    //         }
    //     }
    //     for(int j=0; j<m; j++){
    //         if(matrix[0][j] == 0){
    //             flag2 = true;
    //         }
    //     }
    //     for(int i=1; i<n; i++){
    //         for(int j=1; j<m; j++){
    //             if(matrix[i][j] == 0){
    //                 matrix[i][0] = matrix[0][j] = 0;
    //             }
    //         }
    //     }
    //     for(int i=1; i<n; i++){
    //         for(int j=1; j<m; j++){
    //             if(matrix[i][0] == 0 || matrix[0][j] == 0){
    //                 matrix[i][j] = 0;
    //             }
    //         }
    //     }
    //     if(flag1 == true){
    //         for(int i=0; i<n; i++){
    //             matrix[i][0] = 0;
    //         }
    //     }
    //     if(flag2 == true){
    //         for(int j=0; j<m; j++){
    //             matrix[0][j] = 0;
    //         }
    //     }
    // }