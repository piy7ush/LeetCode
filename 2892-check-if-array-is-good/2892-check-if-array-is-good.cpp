class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();

        if(n==0 || n==1)return false;
        sort(nums.begin(),nums.end());

        if(nums[n-1]!=nums[n-2])return false;

        for(int i=0;i<n-1;i++){
            if(nums[i]!=i+1)return false;
        }
        return true;
    }
};