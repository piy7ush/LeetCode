class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int number =0;
        map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }

        for(auto x:mp){
            if(x.second == 1){
                number =x.first;
            }
        }
        return number;
    }
};