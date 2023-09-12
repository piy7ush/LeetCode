class Solution {
int countPartitions(vector<int>&arr,int maxSum){
    int partitions =1;
    long long subarraysum = 0;
    for(int i=0;i<arr.size();i++){
        if(subarraysum+arr[i]<=maxSum){
            subarraysum+=arr[i];
        }
        else{
            partitions++;
            subarraysum = arr[i];
        }
    }
    return partitions;
}
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);

        while(low<=high){
            int mid = (low+high)/2;
            int partition = countPartitions(nums,mid);
            if(partition>k){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return low;
    }
};