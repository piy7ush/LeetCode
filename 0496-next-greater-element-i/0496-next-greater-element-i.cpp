class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> index;
        for(auto x:nums1){
            for(int i=0;i<nums2.size();i++){
                if(x==nums2[i]){
                    index.push_back(i);
                }
            }
        }
        vector<int> ans;
        for(auto x:index){
            if(x+1 == nums2.size()) ans.push_back(-1);
            for(int j=x+1;j<nums2.size();j++){
                if(nums2[j]>nums2[x]){
                    ans.push_back(nums2[j]);
                    break;
                }
                if(j==nums2.size()-1) ans.push_back(-1);
            }
           
        }
        return ans;
    }
};