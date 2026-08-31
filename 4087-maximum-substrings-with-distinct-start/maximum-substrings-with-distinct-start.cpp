class Solution {
public:
    int maxDistinct(string s) {
        int n = s.size();
        unordered_map<char, int> map;

        int ans = 0;
        for(int i=0; i<n; i++){
            if(map.count(s[i])){
                continue;
            }
            else{
                map[s[i]] = 1;
                ans++;
            }
        }

        return ans;
    }
};