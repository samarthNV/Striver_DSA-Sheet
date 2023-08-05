// Better Solution

    // bool searchMatrix(vector<vector<int>>& matrix, int target) {
    //     int n = matrix.size();
    //     int m = matrix[0].size();
    //     int i = n-1;
    //     int j = 0;
    //     while(i >= 0 && j < m){
    //         if(matrix[i][j] == target){
    //             return true;
    //         }
    //         if(matrix[i][j] > target){
    //             i--;
    //         }else{
    //             j++;
    //         }
    //     }
    //     return false;
    // }

// Optimal Solution

    // bool searchMatrix(vector<vector<int>>& matrix, int target) {
    //     int row = matrix.size();
    //     int col = matrix[0].size();
    //     int low = 0;
    //     int high = (row*col)-1;
    //     while(low <= high){
    //         int mid = low + (high - low)/2;
    //         int element = matrix[mid/col][mid%col];
    //         if(element == target){
    //             return true;
    //         }
    //         if(element > target){
    //             high = mid - 1;
    //         }else{
    //             low = mid + 1;
    //         }
    //     }
    //     return false;
    // }