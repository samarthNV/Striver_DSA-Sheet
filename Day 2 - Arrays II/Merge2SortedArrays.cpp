// Optimal Solution

    // void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    //     for (int j = 0, i = m; j<n; j++){
    //         nums1[i] = nums2[j];
    //         i++;
    //     }
    //     sort(nums1.begin(),nums1.end());
    // }

// Optimal Solution using two pointers and no extra space

    // void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    //     int left = m-1;
    //     int right = 0;

    //     while(left >= 0 && right < n){
    //         if(nums1[left] > nums2[right]){
    //             swap(nums1[left], nums2[right]);
    //             left--;
    //             right++;
    //         }
    //         else{
    //             break;
    //         }
    //     }
    //     sort(nums1.begin(), nums1.begin()+m); // Sorting till m^th index
    //     sort(nums2.begin(), nums2.end());

    //     for(int i=m; i<m+n; i++){
    //         nums1[i] = nums2[i-m];
    //     }
    // }


