// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         for(int i =0;i<nums.size();i++){
//             int count = 0;
//             for(int j=0;j<nums.size();j++){
//                 if(nums[i]==nums[j]){
//                     count++;
//                 }
//             }
//             if(count>nums.size()/2)return nums[i];
//         }
//         return 0;
//     }
// };


// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         return nums[nums.size()/2];
        
//     }
// };

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int element =0; 
//         int count =0;
//         for(int i =0;i<nums.size();i++){
//             if(count ==0){
//                 element = nums[i];
//             }
//             if(nums[i] == element){
//                 count++;
//             }
//             else{
//                 count--;
//             }
//         }
//         return element;
//     }
// };


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count =0;
        int element =0;

        for(int i =0;i<nums.size();i++){
            if(count==0){
                element =nums[i];
            }
            if(nums[i]==element ){
                count++;
            }
            else{
                count--;
            }

        }
        return element;
    }
};



