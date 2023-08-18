class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string final1 ="";
        stack<char>ans;
        for(auto x: s){
            ans.push(x);
        }
        int count =0;
        while(!ans.empty()){
            char temp = ans.top();
            if(temp=='#'){
                ans.pop();
                count++;
            }
            else if(count>0){
                while(count>0 && ans.size()>0){
                    if(ans.top()=='#'){
                        count++;
                        ans.pop();

                    }
                    else{
                        ans.pop();
                    count--;
                    }
                    
                }
            }

            else{
                final1 = temp+final1;
                ans.pop();
            }

        }


        string final2 ="";
        stack<char>ans2;

        for(auto x: t){
            ans2.push(x);
        }
        int count2 =0;
        while(!ans2.empty()){
            char temp2 = ans2.top();
            if(temp2=='#'){
                ans2.pop();
                count2++;
            }
            else if(count2>0){
                while(count2>0 &&ans2.size()>0){
                    if(ans2.top()=='#'){
                        count2++;
                        ans2.pop();
                    }
                    else{
                    ans2.pop();
                    count2--;
                    }
                }
            }

            else{
                final2 = temp2+final2;
                ans2.pop();
            }

        }
        if(final1==final2)return true;
        else return false;
    }
};