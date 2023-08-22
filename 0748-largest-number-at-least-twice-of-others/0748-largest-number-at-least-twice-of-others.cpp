class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int k = *max_element(nums.begin(),nums.end());
        int count=0;

        for(int j=0;j<nums.size();j++){
            if(nums[j]==k){
                count=count+j;
                break;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]+nums[i]<=k){
                continue;
                }
            else if(i==count)continue;
            else{
                return -1;
            }
            
        }
        return count;
    }
    
};