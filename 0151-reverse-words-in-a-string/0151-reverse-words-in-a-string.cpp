class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        
        string word = "";
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                if(word.size()==0)continue;
                else{
                    st.push(word);
                }
                word="";
            }
            else{
                word+=s[i];

                }

            

        }
        if(word.size()!=0){
            st.push(word);
        }
        string res="";

        while(!st.empty()){
            
            res+=st.top();
            st.pop();
            if(st.size()!=0)
            res+=" ";
        }

        return res;
    }
};