// class Solution {
// public:
//     int distributeCandies(vector<int>& c) {
//         set<int>ans;
//         for(int i=0;i<c.size();i++){
//             ans.insert(c[i]);
//         }
//         int count =0;
//         for(int j=0;j<ans.size() && j<c.size()/2;j++){
//             count++;

//         }
//         return count;
//     }
// };

class Solution {
public:
    int distributeCandies(vector<int>& c) {
        set<int>ans;
        for(int i=0;i<c.size();i++){
            ans.insert(c[i]);
        }
        if(ans.size()>c.size()/2) return c.size()/2;
        else return ans.size();
    }
};

