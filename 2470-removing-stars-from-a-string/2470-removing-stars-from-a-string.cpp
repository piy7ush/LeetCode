// class Solution {
// public:
//     string removeStars(string s) {
//         string final1 ="";
//         stack<char>ans;
//         for(auto x: s){
//             ans.push(x);
//         }
//         int count =0;
//         while(!ans.empty()){
//             char temp = ans.top();
//             if(temp=='*'){
//                 ans.pop();
//                 count++;
//             }
//             else if(count>0){
//                 while(count>0 && ans.size()>0){
//                     if(ans.top()=='*'){
//                         count++;
//                         ans.pop();

//                     }
//                     else{
//                         ans.pop();
//                     count--;
//                     }
                    
//                 }
//             }

//             else{
//                 final1 = temp+final1;
//                 ans.pop();
//             }

//         }
//         return final1;
//     }
// };


class Solution {
public:
    string removeStars(string s) {
    vector<char> res;
    for(int i=0;i<s.size();i++){
        if(s[i]=='*' && (!res.empty())){
            res.pop_back();
        }
        else if(s[i]!='*'){
            res.push_back(s[i]);
        }
        else{
            continue;
        }
    }
    string result="";
    for(auto x:res){
        result+=x;
    }
    return result;
    }
};