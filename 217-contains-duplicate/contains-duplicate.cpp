class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;

        for(int val : nums){
            if(map[val]){
                return true;
            }
            else{
                map[val] = 1;
            }
        }

        return false;
    }
};