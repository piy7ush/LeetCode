// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         int n = nums.size();
//         sort(nums.begin(),nums.end());

//         if(n==0){
//             return 0;
//         }

//         int ans =1;
//         int prev = nums[0];
//         int curr =1;

//         for(int i=1;i<n;i++){
//             if(nums[i]==prev+1){
//                 curr++;

//             }
//             else if(nums[i]!=prev){
//                 curr =1;
//             }
//             prev = nums[i];
//             ans = max(ans,curr);

//         }
//         return ans;
//     }
// };


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());

        if(n==0){
            return 0;
        }

        int curr =1;
        int prev = nums[0];
        int ans = 1;

        for(int i =1;i<n;i++){
            if(nums[i]==prev+1){
                curr++;
            }
            else if(nums[i]!=prev){
                curr=1;
            }
            prev = nums[i];
            ans = max(ans,curr);
        }
        return ans;
    }
};