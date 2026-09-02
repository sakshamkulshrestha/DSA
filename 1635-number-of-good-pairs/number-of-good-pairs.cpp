class Solution{
public:
    int numIdenticalPairs(vector<int> &v){
        int n = v.size();
        unordered_map<int, int> map;

        int pairs = 0;
        for(int i=0; i<n; i++){
            if(map.count(v[i])){
                pairs += map[v[i]];
                map[v[i]]++;
            }
            else{
                map[v[i]] = 1;
            }
        }

        return pairs;
    }
};