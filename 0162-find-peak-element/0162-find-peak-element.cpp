// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
//         int s =0;
//         int e = nums.size()-1;
//         int mid = (s+e)/2;

//         while(s<e){
//             if(nums[mid]<nums[mid+1]){
//                 s =mid+1;

//             }
//             else{
//                 e = mid;
//             }
//             mid =(s+e)/2;
//         }
//         return mid;
        
//     }
// };

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0;
        int end =nums.size()-1;
        int mid = (start+end)/2;

        while(start<end){
            if(nums[mid]<nums[mid+1]){
                start = mid+1;
            }
            else{
                end = mid;
            }
            mid = (start+end)/2;

        }
        return mid;
    }
};