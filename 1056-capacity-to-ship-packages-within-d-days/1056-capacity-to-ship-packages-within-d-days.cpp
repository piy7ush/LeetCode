class Solution {
private:
    int countdays(vector<int>&arr,int capacity){
        int n =arr.size();
        int load = 0;
        int days =1;
        for(int i =0;i<n;i++){
            if(load+arr[i]>capacity){
                days++;
                load = arr[i];
            }
            else{
                load+=arr[i];
            }
        }
        return days;

    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);

        while(low<=high){
            int mid = (low+high)/2;

            if(countdays(weights,mid)<=days){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};