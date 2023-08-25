class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int beta =0;
        map<int,int>mp;

        for(auto x: nums){
            mp[x]++;
        }
        for(auto x:mp){
            if(x.second>1){
                beta=x.first;
            }
        }
        return beta;
    }
};