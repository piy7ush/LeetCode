class Solution {
public:
int beauty(vector<int>&alpha){
    int mf =INT_MIN;
    int lf=INT_MAX;
    for(int i=0;i<26;i++){
        mf = max(mf,alpha[i]);
        if(alpha[i]>=1){
            lf = min(lf,alpha[i]);
        }
    }
    return mf-lf;
}

    int beautySum(string s) {
        int result =0;
        for(int i=0;i<s.size();i++){
            vector<int>alpha(26,0);
            for(int j=i;j<s.size();j++){
                alpha[s[j]-'a']++;
                result = result+beauty(alpha);
            }
        }
        return result;
    }
};