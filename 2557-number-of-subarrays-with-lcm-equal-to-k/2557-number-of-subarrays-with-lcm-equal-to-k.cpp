class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int count =0;

        for(int i=0;i<nums.size();i++){
            int n =nums[i];
            if(n==k)count++;

            for(int j=i+1;j<nums.size();j++){
                n=lcm(n,nums[j]);
                if(n==k){
                    count++;
                }
                if(n>k)break;
            }
        }
        return count;
        
    }
};