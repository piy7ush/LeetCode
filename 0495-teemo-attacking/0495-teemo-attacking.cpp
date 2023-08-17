class Solution {
public:
    int findPoisonedDuration(vector<int>& t, int duration) {
        if(duration==0)return 0;
        int ans =0;
        for(int i=0;i<t.size()-1;i++){
            ans+=min(t[i+1]-t[i],duration);
        }
        return ans+duration;
    }
};

// class Solution {
// public:
//     int findPoisonedDuration(vector<int>& timeSeries, int duration) {
//         set<int>ans;
//         for(int i=0;i<timeSeries.size();i++){
//             for(int j=timeSeries[i];j<=timeSeries[i]+duration-1;j++){
//                 ans.insert(j);
//             }
//         }
//         return ans.size();
//     }
// };