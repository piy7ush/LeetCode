class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>std;
        for(auto x:students){
            std.push(x);
        }
        reverse(sandwiches.begin(),sandwiches.end());
        stack<int>sand;
        for(auto x: sandwiches){
            sand.push(x);
        }
        int count=students.size()*3;
        while(!std.empty() && !sand.empty() && count>0){
            if(std.front()==sand.top()){
                std.pop();
                sand.pop();
            }
            else{
                int z = std.front();
                std.pop();
                std.push(z);
                count--;
            }
        }
        return std.size();
    }
};