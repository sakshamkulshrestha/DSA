class Solution {
public:
    int findDuplicate(vector<int>& v) {
        unordered_map<int, int> map;
        for(int a : v){
            if(map.count(a)) return a;
            else map[a] = 1;
        }

        return -1;
    }
};