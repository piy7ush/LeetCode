class Solution {
public:
    bool isValid(string s) {
        stack<char>ans;

        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                ans.push(s[i]);
            }

            else if(s[i]==')'){
                if(ans.empty() || ans.top()!='('){
                    return false;
                }
                else ans.pop();

            }

            else if(s[i]=='}'){
                if(ans.empty()||ans.top()!='{'){
                    return false;
                }
                ans.pop();
            }
            
            else if(s[i]==']'){
                if(ans.empty()||ans.top()!='['){
                    return false;
                }
                ans.pop();
            }


            
            }
            if(ans.empty()){
                return true;
            }
            return false;
        }
};


