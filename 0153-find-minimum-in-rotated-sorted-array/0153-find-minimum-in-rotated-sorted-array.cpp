// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int n = nums.size();
        
//         int mid;
//         int ans = nums[0];
//         int left = 1;
//        int  right = n-1;
        
//         while(left <= right){
//             mid = (left+right) >> 1;
            
//             if(nums[mid] < nums[0]){
//                 ans = min(ans, nums[mid]);
//                 right = mid-1;
//             }
//             else{
                
//                 left = mid+1;
//             }
//         }
//         return ans;
//     }
// };

// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int n = nums.size();

//         int max = nums[0];
//         for(int i =0;i<n;i++){
//             if(nums[i]<max){
//                 max = nums[i];
//             }
//         }
//         return max;
//     }
// };

class Solution {
public:
    int findMin(vector<int>& nums) {
        return *min_element(nums.begin(),nums.end());
    }
};