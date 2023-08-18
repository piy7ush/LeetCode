class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string>ans;
        for(auto x:logs){
            
            if(x=="../"){
                if(ans.size()==0)continue;
                else
                ans.pop();

            }
            else if(x=="./")continue;
            else{
                ans.push(x);
            }
            
        }
        return ans.size();
    }
};