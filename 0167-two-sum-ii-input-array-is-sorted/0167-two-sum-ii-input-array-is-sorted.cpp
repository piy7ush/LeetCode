// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         vector<int>ans;

//         for(int i=0;i<numbers.size();i++){
//             for(int j=i+1;j<numbers.size();j++){
//                 if(numbers[i]+numbers[j]==target){
//                     ans.push_back(i+1);
//                     ans.push_back(j+1);
//                 }
//             }
//         }
//         return ans;


//     }
// };


// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         // vector<int>ans;
//         for(int i=0, j=numbers.size()-1;i<j;){
//             if(numbers[i]+numbers[j]==target){
//                 // ans.push_back(i+1);
//                 // ans.push_back(j+1);
//                 return{i+1,j+1};
//             }
//             else if(numbers[i]+numbers[j]<target){
//                 i++;
//             }
//             else{
//                 j--;
//             }
//         }
//         return {};        
//     }
// };

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size()-1;
        while(i<j)
        {
            if(numbers[i]+numbers[j]>target)
                j--;
            else if(numbers[i]+numbers[j]<target)
                i++;
            if(numbers[i]+numbers[j]==target)
                return {i+1,j+1};
        }
        return {};
    }
};

