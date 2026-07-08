class Solution {
public:
    bool canJump(vector<int>& v) {
        int goal = v.size()-1;

        for(int i = v.size()-2; i>=0; i--){
            if(i+v[i] >= goal){
                goal = i;
            }
        }

        return goal == 0;        
    }
};