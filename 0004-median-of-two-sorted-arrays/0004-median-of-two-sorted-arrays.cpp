class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double finalans =0;
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            ans.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(),ans.end());        

        if(ans.size()%2!=0){
            finalans = ans[ans.size()/2];
        }
        else if(ans.size()%2==0){
            finalans = (double)(ans[ans.size()/2-1]+ans[ans.size()/2])/2;
        } 
        return finalans;  
    }
};