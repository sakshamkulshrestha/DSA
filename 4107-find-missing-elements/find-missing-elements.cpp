class Solution {
public:
    vector<int> findMissingElements(vector<int>& v) {
        int n = v.size();
        sort(v.begin(), v.end());
        vector<int> ans;

        if(n == 0) return ans;
        unordered_map<int, bool> map;

        for(int val : v){
            map[val] = true;
        }

        for(int i=v[0]; i<=v[n-1]; i++){
            if(!map.count(i)) ans.push_back(i);
        }

        return ans;
    }
};