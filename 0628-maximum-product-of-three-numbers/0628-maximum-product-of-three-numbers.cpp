// class Solution {
// public:
//     int maximumProduct(vector<int>& nums) {
//         int count = INT_MIN;
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 for(int k=j+1;k<nums.size();k++){
//                     int mul= nums[i]*nums[j]*nums[k];
//                     count = max(count,mul);

//                 }
//             }
//         }
//         return count;
//     }
// };

// class Solution {
// public:
//     int maximumProduct(vector<int>& nums) {
//         long long count = INT_MIN;
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size();i++){
//             int j = i+1;
//             int k = nums.size()-1;
//             while(j<k){
//                 long long mul = nums[i]*nums[j]*nums[k];
//                 count = max(count,mul);
//                 j++;
//                 k--;
//             }
//         }
//         return count;
//     }
// };

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int prod= nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        int produ= nums[nums.size()-1]*nums[0]*nums[1];
        return max(produ,prod);
    }
};

