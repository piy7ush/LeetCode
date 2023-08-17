class Solution {
public:
    bool check(string row,string check){
        int cnt=0;
        for(auto X:check){
            cnt+=count(row.begin(),row.end(),X);

        }
        if(cnt==check.size())return true;
        else return false;
    }
    vector<string> findWords(vector<string>& words) {
      string row1 ="qwertyuiopQWERTYUIOP";
      string row2 ="asdfghjklASDFGHJKL";
      string row3 ="zxcvbnmZXCVBNM";
      vector<string>ans;

      for(auto X: words){
          if(count(row1.begin(),row1.end(),X[0])==1){
              if(check(row1,X)){
                  ans.push_back(X);

              }
          }
          else if(count(row2.begin(),row2.end(),X[0])==1){
              if(check(row2,X)){
                  ans.push_back(X);

              }
          }
          else if(count(row3.begin(),row3.end(),X[0])==1){
              if(check(row3,X)){
                  ans.push_back(X);

              }
          }
      }
      return ans; 
    }
};