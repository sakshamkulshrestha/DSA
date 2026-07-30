class Solution {
public:
    vector<int> twoSum(vector<int>& v, int t) {
        int n = v.size();
        unordered_map<int, int> map;
        vector<int> ans;

        for(int i=0; i<n; i++){
            int need = t - v[i];
            if(map.count(need)){
                ans.push_back(i);
                ans.push_back(map[need]);

                return ans;
            }
            else{
                map[v[i]] = i;
            }
        }


        return ans;
    }
};