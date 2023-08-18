class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>ans;
        for(int i=0;i<prices.size();i++){
            for(int j=i+1;j<prices.size();j++){
                if(prices[j] <= prices[i]){
                    ans.push_back(prices[i] - prices[j]);
                    break;
                }
                else if(j == prices.size()-1){
                    ans.push_back(prices[i]);
                }
            }
        }
        ans.push_back(prices[prices.size()-1]);
        return ans;
    }
};