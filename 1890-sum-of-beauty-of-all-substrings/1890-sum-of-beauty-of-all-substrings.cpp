// class Solution {
// public:
//     int beauty(vector<int>&ans){
//         int mini = INT_MAX;
//         int maxi = INT_MIN;
//         for(int i=0;i<26;i++){
//             maxi = max(maxi,ans[i]);
//             if(ans[i]>=1){
//                 mini = min(mini,ans[i]);
//             }
//         }
//         return maxi-mini;
//     }
//     int beautySum(string s) {
//         int result =0;
//         for(int i=0;i<s.size();i++){
//             vector<int>ans(26,0);
//             for(int j=i;j<s.size();j++){
//                 ans[s[j]-'a']++;
//                 result =result+beauty(ans);
//             }
//         }
//         return result;
//     }
// };


class Solution {
public:
    int beauty(vector<int>&ans){
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<26;i++){
            maxi = max(maxi,ans[i]);
            if(ans[i]>=1){
                mini = min(mini,ans[i]);
            }
        }
        return maxi-mini;
    }
    int beautySum(string s) {
        int result =0;
        for(int i=0;i<s.size();i++){
            vector<int>ans(26,0);
            for(int j=i;j<s.size();j++){
                ans[s[j]-'a']++;
                result = result+beauty(ans);
            }
        }
        return result;
    }
};