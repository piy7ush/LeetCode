class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int a =-1;
        int b =-1;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==target){
                a = i;
                break;
            }
        }

        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==target){
                b =i;
                break;
            }
        }
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};