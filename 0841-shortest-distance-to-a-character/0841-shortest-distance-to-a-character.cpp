class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
       int n = s.size();
       vector<int>occurence;
       for( int i = 0; i<n; i++ )
       {
          if( s[i] == c )
          {
              occurence.push_back(i);
          }
       }
       vector<int>ans;
        for( int i = 0; i < n; i++ )
        {     int distance = INT_MAX;
           for( int j = 0; j<occurence.size(); j++ )
           {
             distance = min( distance, abs(occurence[j]-i) );
           }
           ans.push_back(distance);
        }  
        return ans;
    }
};