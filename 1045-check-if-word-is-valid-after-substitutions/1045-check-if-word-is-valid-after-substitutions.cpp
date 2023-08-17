class Solution {
public:
    bool isValid(string s) {
        stack<char>ans;
        if(s[0]!='a') return false;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'){
                ans.push(s[i]);
            }
            else if(s[i]=='b'){
                if(!ans.empty() && ans.top()=='a'){
                    ans.push(s[i]);
                }
                else return false;
            }
            else{
                if(!ans.empty() && ans.top()=='b'){
                    ans.pop();
                
                if(!ans.empty() && ans.top()=='a'){
                    ans.pop();
                }
                    else return false;
                }
                else return false;
            }
           
            
        }
        return ans.empty();
    }
};