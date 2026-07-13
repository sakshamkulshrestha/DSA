class Solution {
public:
    Solution() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
    }
    vector<int> twoSum(vector<int> &v, int t) {
        int n = v.size();
        vector<int> ans;
        
        unordered_map<int, int> map;
        for(int i=0; i<n; i++){
            int need = t - v[i];

            if(map.count(need)){
                ans.push_back(map[need]+1);
                ans.push_back(i+1);

                return ans;
            }
            
            map.emplace(v[i], i);
        }

        return ans;
    }
};