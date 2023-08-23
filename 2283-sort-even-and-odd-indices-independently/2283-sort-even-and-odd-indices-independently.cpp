class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;

        for(int i=0;i<nums.size();i++){
            if(i%2==0)even.push_back(nums[i]);
            else{
                odd.push_back(nums[i]);
            }
        }

        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        reverse(odd.begin(),odd.end());

        for(auto x:even){
            cout<<x<<" ";
            
        }
        cout<<endl;

        for(auto x:odd){
            cout<<x<<" ";
        }

        vector<int>final;
        int x =0;
        int y=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                final.push_back(even[x]);
                x++;
            }
            else{
                final.push_back(odd[y]);
                y++;
            }
        }
        return final;
        

    }
};