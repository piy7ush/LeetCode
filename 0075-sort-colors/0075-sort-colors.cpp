// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         for(int i =1;i<nums.size();i++){
//             for(int j =0;j<nums.size()-1;j++){
//                 if(nums[j]>nums[i]){
//                     swap(nums[i],nums[j]);
//                 }
//             }
//         }
//     }
// };


// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//        int cnt0 = 0;
//        int cnt1 =0;
//        int cnt2 =0;
//        int n =nums.size();

//        for(int i=0;i<n;i++){
//            if(nums[i]==0)cnt0++;
//            else if (nums[i]==1)cnt1++;
//            else cnt2++;
//        }

//        for(int i=0;i<cnt0;i++)nums[i]=0;
//        for(int i=cnt0;i<cnt0+cnt1;i++)nums[i]=1;
//        for(int i=cnt0+cnt1;i<n;i++)nums[i]=2;


//     }
// };


// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int n = nums.size();
//         int low =0;
//         int mid = 0;
//         int high =n-1;
        

//         while(mid<=high){
//             if(nums[mid]==0){
//                 swap(nums[low],nums[mid]);
//                 low++;
//                 mid++;
//             }
//             else if(nums[mid]==1){
//                 mid++;

//             }
//             else{
//                 swap(nums[mid],nums[high]);
//                 high--;
//             }
//         }
//     }
// };


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0=0;
        int count1=0;
        int count2=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)count0++;
            if(nums[i]==1)count1++;
            if(nums[i]==2)count2++;
        }

        for(int i=0;i<count0;i++)nums[i]=0;
        for(int i=count0;i<count1+count0;i++)nums[i]=1;
        for(int i=count0+count1;i<nums.size();i++)nums[i]=2;

    }
};