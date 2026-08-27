class Solution {
public:
    int longestConsecutive(vector<int>& v){
        if(v.size() == 0){
            return 0;
        }

        unordered_map<int, int> map;

        for(int val : v){
            if(map.count(val)){
                continue;
            }
            else{
                map[val] = 1;
            }
        }

        int len = 0;
        int prev = 0;

        for(auto val : map){

            int a = val.first;

            if(map.find(a - 1) != map.end()){
                continue;
            }

            len = 1;

            while(map.find(a + len) != map.end()){
                len++;
            }

            if(len > prev){
                prev = len;
            }
        }

        return prev;
    }
};