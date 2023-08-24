class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int count=0;
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            ans.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            ans.push_back(nums2[i]);
        }
        map<int,int>mp;
        for(auto x:ans){
            mp[x]++;
        }
        for(auto x:mp){
            if(x.second>1){
                return x.first;
            }
        }
        string st;
        int mini = *min_element(nums1.begin(),nums1.end());
        int mini2 = *min_element(nums2.begin(),nums2.end());

        if(mini<mini2) st = to_string(mini)+to_string(mini2);
        else st=to_string(mini2)+to_string(mini);
        return stoi(st);
    

    }
};