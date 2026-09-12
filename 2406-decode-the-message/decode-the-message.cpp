class Solution {
public:
    string decodeMessage(string key, string m) {
        unordered_map<char, char> map;
        int n = key.length();

        char alpha = 'a';
        for(int i=0; i<n; i++){
            if(map.count(key[i]) || key[i] == ' '){
                continue;
            }
            else{
                map[key[i]] = alpha++;
            }
        }

        string ans;
        for(int i=0; i<m.size(); i++){
            if(m[i] == ' ') ans += " ";
            else ans += map[m[i]];
        }

        return ans;
    }
};