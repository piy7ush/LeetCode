class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        
        vector<int>ans;
        int sum1=0;
        for(int i=0;i<aliceSizes.size();i++){
            sum1=sum1+aliceSizes[i];
        }

        int sum2=0;
        for(int j=0;j<bobSizes.size();j++){
            sum2 = sum2 + bobSizes[j];
        }

        int diff =(sum2-sum1)/2;

        unordered_set<int> s(bobSizes.begin(),bobSizes.end());
        
        for(int i=0;i<aliceSizes.size();i++){
            if(s.find(aliceSizes[i]+diff)!=s.end()){
                ans.push_back(aliceSizes[i]);
                ans.push_back(aliceSizes[i]+diff);
                break;
            }
        }
        return ans;
    }
};