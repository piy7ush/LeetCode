class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int s = 0;
        int e = k-1;
        
        double maxium = 0;

        for(int i=s;i<=e;i++){
            maxium += nums[i];
        }

        maxium = maxium/k;

        double temp = INT_MIN;
        temp = max(temp,maxium);
        for(int i=e+1;i<nums.size();i++){
            maxium = maxium-(double)nums[s]/k;
            maxium = maxium+(double)nums[i]/k;
            temp = max(maxium,temp);
            s++;
        }
        return temp;
    }
};