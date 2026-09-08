class Solution {
public:
    vector<int> findMissingElements(vector<int>& v) {
        vector<int> ans;
        unordered_map<int, int> map;
        int n = v.size();

        if(n == 0){
            return ans;
        }

        int max = v[0];
        int min = v[0];

        for(int val : v){
            if(val > max){
                max = val;
            }
            else if(val < min){
                min = val;
            }

            map[val] = 1;
        }

        for(int i=min; i<=max; i++){
            if(map.count(i)){
                continue;
            }
            else{
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};