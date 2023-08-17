// class Solution {
// public:
//     vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
//         int n= mat.size();
//         int m= mat[0].size();
//         if(n==r && m==c) return mat;
//         cout<<floor(1/4);
       
//         vector<int> temp;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 temp.push_back(mat[i][j]);
//             }
//         }
//         int nR,nC;
//         if(r==c) nR=r, nC=c;
//         else nR= r, nC= c/r;
//         if(c/r ==0) nC++;
//         vector<vector<int>> ans(nR,vector<int>(nC,0));
//         int k=0;
//         for(int i=0;i<nR;i++){
//             for(int j=0;j<nC;j++){
//                 ans[i][j]=temp[k];
//                 k++;
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int> arr;
        int oR=mat.size();
        int oC=mat[0].size();
        if((oR*oC)!=(r*c)) return mat;
        for(int i=0;i<oR;i++){
            for(int j=0;j<oC;j++){
                arr.push_back(mat[i][j]);
            }
        }
        vector<vector<int>> ans(r,vector<int> (c));
        int k=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                ans[i][j]=arr[k++];
            }
        }
        return ans;
    }
};