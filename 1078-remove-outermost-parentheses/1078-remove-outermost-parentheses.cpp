// class Solution {
// public:
//     string removeOuterParentheses(string s) {
//         string result;
//         stack<char>st;
//         for(int i:s){
//             if(i=='('){
//                 if(!st.empty()){
//                     result.push_back(i);
//                 }
//                 st.push(i);
//             }

//             else{
//                 st.pop();
//                 if(!st.empty()){
//                     result.push_back(i);
//                 }
//             }
//         }
//         return result;
//     }
// };


class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        stack<char>ans;

        for(int i =0;i<s.size();i++){
            if(s[i]=='('){
                if(!ans.empty()){
                    result.push_back(s[i]);
                }
                ans.push(s[i]);
            }
            else{
                ans.pop();
                if(!ans.empty()){
                    result.push_back(s[i]);
                }
            }
        }
        return result;

    }
};