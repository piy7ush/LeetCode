// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int n = nums.size();
//         int count = 0;
        
//         for(int i=0;i<n;i++){
//             for(int j=i;j<n;j++){
//                 int sum =0;
//                 for(int a=i;a<=j;a++){
//                     sum+=nums[a];
                    
//                 }
//                 if(sum==k)count++;
//             }
//         }
//         return count; 
//     }
// };


// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int n = nums.size();
//         int count = 0;

//         for(int i=0;i<n;i++){
//             int sum =0;
//             for(int j=i;j<n;j++){
//                 sum+=nums[j];
//                 if(sum==k){
//                     count++;
//                 }
//             }
            
//         }
//         return count; 
//     }
// };



class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        map<int,int>mp;
        mp[0]=1;
        int count =0;
        int presum=0;
        for(int i=0;i<n;i++){
            presum+=nums[i];

            int remove=presum-k;

            count+=mp[remove];

            mp[presum]+=1;
        }
        return count; 
    }
};