class Solution {
public:
    int solve(vector<int> &cost,int ind,vector<int>&dp){
        if(ind==cost.size()) return 0;
        if(ind>cost.size()) return INT_MAX;
        if(dp[ind]!= -1) return dp[ind];
        if(ind==cost.size()-1) return cost[ind];
        int pick= cost[ind]+ solve(cost,ind+1,dp);
        int notPick= cost[ind]+ solve(cost,ind+2,dp);
        return dp[ind]=min(pick,notPick);
   }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size()+1,-1);
        return min(solve(cost,0,dp),solve(cost,1,dp));
    }
};