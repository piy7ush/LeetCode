class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string ans="";
        for(auto x:words){
            ans+=x[0];
        }
        if(ans==s) return true;
        else return false;
    }
};