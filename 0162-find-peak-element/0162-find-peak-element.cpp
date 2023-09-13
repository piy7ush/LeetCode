class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // int start = 0;
        // int end = nums.size()-1;
        // int mid = (start+end)/2;

        // while(start<end){
        //     if(nums[mid]<nums[mid+1]){
        //         start = mid+1;
        //     }
        //     else{
        //         end = mid;
        //     }
        //     mid = (start+end)/2;
        // }
        // return mid;
        int a = *max_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==a)return i;
        }
        return 0;
    }
};