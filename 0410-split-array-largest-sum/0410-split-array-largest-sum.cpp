class Solution {
private:
    bool ispossible(vector<int>&nums, int k, int mid){
        int studentcount =1;
        long long pagesum = 0;

        for(int i=0;i<nums.size();i++){
            if(pagesum + nums[i]<=mid){
                pagesum+=nums[i];
            }
            else{
                studentcount++;
                if(studentcount>k || nums[i]>mid)return false;
                pagesum = nums[i];
            }
        }
        return true;
    }
public:
    int splitArray(vector<int>& nums, int k) {
        int ans =-1;
        int start = 0;
        int end = accumulate(nums.begin(),nums.end(),0);

        int mid = (start+end)/2;
        
        while(start<=end){
            if(ispossible(nums,k,mid)){
                ans = mid;
                end = mid-1;
            }
            else start = mid+1;

            mid = (start+end)/2;
        }
        return ans;
        
    }
};