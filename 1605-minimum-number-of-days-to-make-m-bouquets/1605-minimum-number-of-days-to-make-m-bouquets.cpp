class Solution {
private: 
    bool possible(vector<int>&arr,int day, int m, int k){
        int n = arr.size();
        int count =0;
        int NOofBouq = 0;
        for(int i =0;i<n;i++){
            if(arr[i]<=day){
                count++;
            }
            else{
                NOofBouq += (count/k);
                count =0;
            }
        }
        NOofBouq+= (count/k);
        return NOofBouq>=m;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long val = m*1ll*k*1ll;
        if(n<val)return -1;

        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            mini = min(mini,bloomDay[i]);
            maxi = max(maxi,bloomDay[i]);
        }

        // for(int i =mini;i<=maxi;i++){
        //     if(possible(bloomDay, i,m,k)){
        //         return i;
        //     }
        // }
        // return -1;
        int low = mini;
        int high = maxi;
        while(low<=high){
            int mid = (low+high)/2;
            if(possible(bloomDay,mid,m,k)){
                high = mid-1;
            }
            else low = mid+1;
        }
        return low;
    }
};