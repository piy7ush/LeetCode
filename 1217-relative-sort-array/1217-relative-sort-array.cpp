// class Solution {
// public:
//     vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
//         vector<int>ans;
//         vector<int>ans2;

//         for(int i=0;i<arr2.size();i++){
//             for(int j=0;j<arr1.size();j++){
//                 if(arr2[i]==arr1[j]){
//                     ans.push_back(arr1[j]);
//                 }
//             }
//         }
//         map<int,int>mp;
//         for(auto x:arr1){
//             mp[x]++;
//         }
//         for(auto x:arr2){
//             mp[x]++;
//         }

//         for(auto x:mp){
//             if(x.second==1){
//                 ans.push_back(x.first);
//             }
//         }
        
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>ans;
        
        map<int,int>mp;
        for(auto x:arr1){
            mp[x]++;
        }
        
        for(int i=0;i<arr2.size();i++){
             auto it = mp.find(arr2[i]);  
            for(int j=0;j< it->second;j++){
                ans.push_back(arr2[i]);
            }
            mp.erase(arr2[i]);
            }

            for(auto x:mp){
                // ans.push_back(x.first);
                for(int i=0;i<x.second;i++){
                    ans.push_back(x.first);
                }
            }
            return ans;

        }

        
    
};