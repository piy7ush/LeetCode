class Solution {
public:
    int firstUniqChar(string s) {
        char temp;
        unordered_map<char,int> m;
        
        for(auto x:s){
            m[x]++;
        }
        for(auto x:m) cout<<x.first<<" "<<x.second<<endl;
       for(int i =0;i<s.length();i++){
            if(m[s[i]]==1) return i;
        }
        return -1;
    }
};