class Solution {
public:
    int numJewelsInStones(string j, string s){
        unordered_map<char, int> map;

        int ss = s.size();
        int js = j.size();

        for(int i=0; i<js; i++){
            if(map.count(j[i])){
                continue;
            }
            else{
                map[j[i]] = 1;
            }
        }

        int ans = 0;
        for(int i=0; i<ss; i++){
            if(map.count(s[i])){
                ans++;
            }
        }

        return ans;
    }
};