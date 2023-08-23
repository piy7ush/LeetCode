// class Solution {
// public:
//     int uniqueMorseRepresentations(vector<string>& words) {
//         map<string,int>mp;
//         string arr[]= {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        
//         for(int i=0;i<words.size();i++){
//             string s ="";
//             for(int j=0;j<words[i].size();j++){
//                 s+=arr[words[i][j]-'a'];
//             }
//             mp[s]++;
//         }
//         return mp.size();
//     }
// };


class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string arr[]= {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        unordered_map<string,int>mpp;

        for(int i=0;i<words.size();i++){
            string st="";

            for(int j=0;j<words[i].size();j++){
                st+=arr[words[i][j]-'a'];
                }
                mpp[st]++;

        }
        return mpp.size();


    }
};