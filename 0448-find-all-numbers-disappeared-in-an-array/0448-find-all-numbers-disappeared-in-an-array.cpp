class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int>mp;
        vector<int>ans;
        for(auto X:nums){
            mp[X]++;
        }
        
        for(int i=1;i<=nums.size();i++){
            if(mp[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};