class Solution {
public:
    int majorityElement(vector<int>& v) {
        int n = v.size();
        unordered_map<int, int> map;

        for(int val : v){
            if(map[val]){
                map[val]++;
            }
            else{
                map[val] = 1;
            }
        }

        int maxfreq = 0;
        int value = 0;
        for(auto val : map){
            if(val.second > maxfreq){
                maxfreq = val.second;
                value = val.first;
            }
        }

        return value;

    }
};