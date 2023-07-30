class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n =nums.size();
        vector<int>a;
        vector<int>b;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                a.push_back(nums[i]);
            }
            else{
                b.push_back(nums[i]);
            }
        }
        // vector<int>ans(nums.size());
        // int count =0;
        // for(int i =0;i<a.size();i++){
        //     ans[count]=a[i];
        //     count++;
        //     ans[count]=b[i];
        //     count++;
        // }
        // return ans;
        for(int i=0;i<n/2;i++){
            nums[2*i]=a[i];
            nums[2*i+1]=b[i];
        } 
        return nums;   
    }
};