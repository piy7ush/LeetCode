class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());

        string ans = "";
        string s = strs[0];
        string e = strs[strs.size()-1];

        for(int i=0;i<min(s.size(),e.size());i++){
            if(s[i]!=e[i]){
                return ans;
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};