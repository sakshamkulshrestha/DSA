class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return false;

        unordered_map<char, char> map;
        unordered_set<char> set;

        for (int i=0; i<s.length(); i++){
            char a = s[i];
            char b = t[i];

            if(map.count(a)){
                if(map[a] != b) return false;
            } 
            else{
                if(set.count(b)) return false;
                map[a] = b;
                set.insert(b);
            }
        }
        return true;
    }
};