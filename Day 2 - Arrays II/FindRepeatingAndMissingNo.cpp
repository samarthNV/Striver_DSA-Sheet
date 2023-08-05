// Optimal Solution

    // vector<int> findNumbers(vector<int> &arr) {
    
    //     int n = arr.size();
    //     ll num = (n*(n+1))/2;
    //     ll num2 = (n*(n+1)*(2*n+1))/6;
    //     ll sum = 0, sum2 = 0;
    //     for(int i = 0; i < n; i++){
    //         sum += arr[i];
    //         sum2 += arr[i]*arr[i];
    //     }
    //     ll x = num - sum;
    //     ll y = num2 - sum2;
    //     y = y/x;
    //     ll xr = (x+y)/2;
    //     ll yr = xr - x;
    //     return {(int)xr, (int)yr};
    
    // }