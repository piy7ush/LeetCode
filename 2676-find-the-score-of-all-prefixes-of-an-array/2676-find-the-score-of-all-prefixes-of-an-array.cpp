// class Solution {
// public:
//     vector<long long> findPrefixScore(vector<int>& nums) {
//         vector<long long>ans;
//         int i=0;

//         for(int j=0;j<nums.size();j++){
//             int sum=0;
//             if(i==j){
//                 sum+=nums[i]+nums[j];
//                 ans.push_back(sum);
//             }
//             if(i!=j){
//                 int maxi=0;
//                 for(int k=i;k<=j;k++){
//                     sum+=nums[k];
//                     maxi=max(nums[k],maxi);
//                     sum+=maxi;
//                 }
//                 ans.push_back(sum);
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long>ans(nums.size(),0);

        int maxi=nums[0];
        ans[0]=2*nums[0];

        for(int i=1;i<nums.size();i++){

            maxi=max(maxi,nums[i]);
            nums[i]+=maxi;
            ans[i]+=ans[i-1]+nums[i];
        }
        return ans;

    }
};

