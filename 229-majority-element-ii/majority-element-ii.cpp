class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
        int n = v.size();
        unordered_map<int, int> map;
        int t = n/3;

        for(int val : v){
            if(map.count(val)) map[val]++;
            else map[val] = 1;
        }

        vector<int> ans;
        for(auto a : map){
            if(a.second > t) ans.push_back(a.first);
        }

        return ans;
    }
};