class Solution {
public:
    bool canConstruct(string r, string m) {
        unordered_map<char, int> map;

        int l1 = r.length();
        int l2 = m.length();

        for(int i=0; i<l2; i++){
            if(map.count(m[i])){
                map[m[i]]++;
            }
            else{
                map.emplace(m[i], 1);
            }
        }

        for(int i=0; i<l1; i++){
            if(map.count(r[i])){
                if(map[r[i]] == 1){
                    map.erase(r[i]);
                }
                else{
                    map[r[i]]--;
                }
            }
            else{
                return false;
            }
        }

        return true;
    }
};