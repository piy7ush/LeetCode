// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//          (nums.begin(),nums.end());
//     }
// };

// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         int idx = -1;
//         int n = nums.size();

//         for(int i = n-2;i >= 0;i--){
//             if(nums[i] < nums[i+1]){
//                 idx = i;
//                 break;
//             }
//         }

//         if(idx == -1){
//             reverse(nums.begin(), nums.end());
//             return;
//         }

//         for(int i = n-1;i >= 0;i--){
//             if(nums[i] > nums[idx]){
//                 swap(nums[i], nums[idx]);
//                 break;
//             }
//         }
//         reverse(nums.begin() + idx + 1, nums.end());
//     }
// };


class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int index = -1;
        int n = nums.size();

        for(int i =n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index = i;
                break;
            }
        }
        if(index==-1){
            reverse(nums.begin(),nums.end());
            return;
        }

        for(int i =n-1;i>=0;i--){
            if(nums[i]>nums[index]){
            swap(nums[i],nums[index]);
             break;
            }
           
        }

        reverse(nums.begin()+index+1,nums.end());



       
     }
};
























