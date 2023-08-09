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
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                if(!st.empty()){
                    result.push_back(s[i]);
                }
                st.push(s[i]);
            }

            else{
                st.pop();
                if(!st.empty()){
                    result.push_back(s[i]);
                }
            }
        }
        return result;
    }
};