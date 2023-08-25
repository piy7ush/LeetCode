class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        vector<int>ans;
        unordered_set<int>ans2;
        vector<int>ans3;

        for(auto x:arr){
            mp[x]++;
        }

        for(auto x: mp){
            ans.push_back(x.second);
        }

        for(auto x:ans){
            ans2.insert(x);
        }

        for(auto x:ans2){
            ans3.push_back(x);
        }
        sort(ans.begin(),ans.end());
        sort(ans3.begin(),ans3.end());

        if(ans==ans3)return true;
        else return false;
        
    }
};