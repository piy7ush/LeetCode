class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int count=0;
        int maxi=0;

        for(int i=0;i<nums.size();i++){
                for(int j=0;j<nums.size();j++){
                    if(i!=j){
                    count = (nums[i]-1)*(nums[j]-1);
                maxi = max(count,maxi);
                }
                }
            }
            
        
        return maxi;
    }
};