class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        map<int,int>mp;
        for(auto X:arr){
            mp[X]++;
        }
        for(int i=1;i<=2001;i++){
            if(mp[i]==0){
                k--;
            }
            if(k==0){
                return i;
            }
        }
        return -1;
        
    }
};



