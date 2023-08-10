class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i =0;i<s.length();i++){
            mp[s[i]]++;
        }

        vector<pair<int,char>>vec;
        for(auto X:mp){
            vec.push_back({X.second,X.first});
        }

        sort(vec.begin(),vec.end());

        s = "";
        for(int i= vec.size()-1;i>=0;i--){
            int count = vec[i].first;
            char c = vec[i].second;
            while(count>0){
                s+=c;
                count--;
            }
        }
        return s;

        
    }
};