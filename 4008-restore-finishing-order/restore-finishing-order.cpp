class Solution {
public:
    vector<int> recoverOrder(vector<int>& o, vector<int>& f) {
        vector<int> v;
        unordered_map<int, int> map;

        for(int i=0; i<f.size(); i++){
            map[f[i]] = 1;
        }

        for(int val : o){
            if(map.count(val)){
                v.push_back(val);
            }
        }

        return v;
    }
};