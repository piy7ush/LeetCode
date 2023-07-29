// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//        int minimum =INT_MAX;
//        int maximum = 0;

//        for(int i =0;i<prices.size();i++){
//            minimum=min(minimum,prices[i]);
//            if(prices[i]>minimum){
//                maximum = max(maximum,prices[i]-minimum);
//            }
//        }
//        return maximum;
//     }
// };

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minum =INT_MAX;
        int maxim = 0;

        for(int i =0;i<prices.size();i++){
            minum=min(minum,prices[i]);
            //if(prices[i]>minum){
                maxim=max(maxim,prices[i]-minum);
            // }
        }
        return maxim;
    }
};


















