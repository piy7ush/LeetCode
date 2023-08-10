class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string last = strs[n-1];

        string ans ="";

        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
                return ans; 
            }
            else{
                ans+=first[i];
            }
        }
        return ans;
    }
};