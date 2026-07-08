class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        unordered_map<int, int> map;
        for(int i=0; i<v.size(); i++){
            if(map.count(v[i]) > 0){
                map[v[i]]++;
            }
            else{
                map.emplace(v[i], 1);
            }
        }

        int idx = 0;
        int k = 0;
        for(auto val : map){
            if(val.second > 1){
                v[idx++] = val.first;
                v[idx++] = val.first;

                k += 2;
            }
            else{
                v[idx++] = val.first; 
                k++;
            }
        }

        sort(v.begin(), v.begin() + k);

        return k;
    }
};