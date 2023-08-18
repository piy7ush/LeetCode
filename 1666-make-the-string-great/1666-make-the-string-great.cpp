class Solution {
public:
    string makeGood(string s) {
        stack<char>ans;
        for(auto x:s) ans.push(x);
        string temp="";
        while(!ans.empty()){
            auto val= ans.top();
            cout<<abs(temp[0]-val)<<endl;
            if(abs(temp[0]-val) == 32){
                cout<<"ji";
                temp.erase(temp.begin());
                ans.pop();
                //ans.pop();
            } 
            else{
                temp=val+temp;
                ans.pop();
            }
        }
        return temp;
    }
};