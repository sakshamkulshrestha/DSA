class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> sMap;
        unordered_map<char, int> tMap;

        if(s.size() != t.size()){
            return false;
        }

        for(int i=0; i<s.size(); i++){
            if(sMap.find(s[i]) == sMap.end()){
                sMap[s[i]] = 1;
            }
            else{
                sMap[s[i]]++;
            }
        }

        for(int i=0; i<t.size(); i++){
            if(tMap.find(t[i]) == tMap.end()){
                tMap[t[i]] = 1;
            }
            else{
                tMap[t[i]]++;
            }
        }

        if(sMap == tMap){
            return true;
        }

        return false;
    }
};