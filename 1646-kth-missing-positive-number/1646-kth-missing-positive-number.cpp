// class Solution {
// public:
//     int findKthPositive(vector<int>& arr, int k) {
//         map<int,int>mp;
//         for(auto X:arr){
//             mp[X]++;
//         }

//         for(int i=1;i<=2001;i++){
//             if(mp[i]==0){
//                 k--;
//             }
//             if(k==0){
//                 return i;
//             }
//         }
//         return -1;
//     }
// };


// class Solution {
// public:
//     int findKthPositive(vector<int>& arr, int k) {
//         for(int i=0;i<arr.size();i++){
//             if(arr[i]<=k){
//                 k++;
//             }
//             else break;
//         }
//         return k;
//     }
// };


class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low =0;
        int high =arr.size()-1;
        while(low<=high){
            int mid = (high+low)/2;
            int missing = arr[mid]-(mid+1);
            if(missing<k){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return high+k+1;
    }
};