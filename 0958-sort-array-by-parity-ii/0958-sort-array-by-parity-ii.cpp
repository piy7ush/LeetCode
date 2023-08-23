class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>ans;
        vector<int>ans2;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                ans.push_back(nums[i]);
                }
            else{
                ans2.push_back(nums[i]);
            }
        }
        vector<int>final;
        int x=0;
        int y=0;
        
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                final.push_back(ans[x]);
                x++;
            }
            else{
                final.push_back(ans2[y]);
                y++;
            }
        }
        return final;
    }
};