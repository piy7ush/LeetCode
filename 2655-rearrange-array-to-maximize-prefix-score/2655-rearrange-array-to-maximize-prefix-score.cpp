// class Solution {
// public:
//     int maxScore(vector<int>& nums) {
//         int sum = 0;
//         int maxi = 0;
//         sort(nums.begin(),nums.end());
//         reverse(nums.begin(),nums.end());
//         for(int i=0;i<nums.size();i++){
//             sum+=nums[i];
//             maxi =max(maxi,sum);
//         }
//         return maxi;
//     }
// };

class Solution {
public:
    int maxScore(vector<int>& nums) {
        long long sum=0;
        sort(nums.rbegin(),nums.rend());
        int ans=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>0)ans++;
        }
        return ans;
    }
};

