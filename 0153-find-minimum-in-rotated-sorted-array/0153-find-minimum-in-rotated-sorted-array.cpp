// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int n = nums.size();
        
//         int mid;
//         int ans = nums[0];
//         int l = 1, r = n-1;
        
//         while(l <= r){
//             mid = (l+r) >> 1;
            
            
//             if(nums[mid] < nums[0]){
//                 ans = min(ans, nums[mid]);
//                 r = mid-1;
//             }else{
                
//                 l = mid+1;
//             }
//         }
        
//         return ans;
//     }
// };

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();

        int max = nums[0];
        for(int i =0;i<n;i++){
            if(nums[i]<max){
                max = nums[i];
            }
        }
        return max;
    }
};

