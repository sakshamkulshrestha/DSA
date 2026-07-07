class Solution {
public:
    bool containsDuplicate(vector<int> &v) {
        unordered_set<int> map;
        for(int val : v){
            if(map.count(val) > 0){
                return true;
            }

            map.insert(val);
        }

        return false;
    }
};