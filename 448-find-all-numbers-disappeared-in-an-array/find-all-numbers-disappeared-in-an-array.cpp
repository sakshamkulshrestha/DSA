class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int> &v) {
        int n = v.size();
        vector<int> ans;
        unordered_map<int, int> map;

        for(int val : v){
            map[val] = 1;
        }

        for(int i=1; i<=n; i++){
            if(map[i]){
                continue;
            }
            else{
                ans.push_back(i);
            }
        }

        return ans;
    }
};