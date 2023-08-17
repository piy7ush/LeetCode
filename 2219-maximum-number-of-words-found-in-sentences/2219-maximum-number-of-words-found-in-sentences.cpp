class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int ans =0;
        for(int i=0;i<s.size();i++){
            string str =s[i];
            int maxi=1;
            for(int j=0;j<str.size();j++){
                if(str[j]==' ')
                maxi++;
            }
            ans =max(ans,maxi);
        }
        return ans;
    }
};