class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>ans;
        int count=0;
        map<int,int>mp;

        for(auto x:nums){
            mp[x]++;
        }

        for(auto x:mp){
            if(x.second>=2){
                count+=2;
                ans.push_back(x.first);
                ans.push_back(x.first);
            }
            if(x.second==1){
                count+=1;
                ans.push_back(x.first);
            }
        }
        for(auto x:ans){
            cout<<x<<" ";
        }
        nums=ans;
        return count;

    }
};