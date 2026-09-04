class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& v) {
        int n = v.size();
        unordered_map<int, int> map;

        for(int val : v){
            if(map.count(val)) map[val]++;
            else map[val] = 1;
        }

        vector<int> ans;
        for(auto val : map){
            if(val.second == 2){
                ans.push_back(val.first);
            }
        }

        return ans;
    }
};