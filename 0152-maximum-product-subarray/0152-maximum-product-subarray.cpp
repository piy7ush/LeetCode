// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         int maxvalue=INT_MIN;
//         int product =1;
//         for(int i=0;i<nums.size();i++){
//             maxvalue = max(maxvalue,product*nums[i]);
//             product = product*nums[i];
//             if(product==0){
//                 product=1;
//             }
//         }
//         product =1;
//         for(int i=nums.size()-1;i>=0;i--){
//             maxvalue = max(maxvalue,product*nums[i]);
//             product = product*nums[i];
//              if(product==0){
//                 product=1;
//             }
//         }
//         return maxvalue;
//     }
// };

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxvalue = INT_MIN;
        int product =1;

        for(int i =0;i<nums.size();i++){
            maxvalue = max(maxvalue,product*nums[i]);
            product= product*nums[i];
            if(product==0)product=1;
        }

        product =1;
        for(int i =nums.size()-1;i>=0;i--){
            maxvalue = max(maxvalue,product*nums[i]);
            product= product*nums[i];
            if(product==0)product=1;
        }
        return maxvalue;
        
    }
};

