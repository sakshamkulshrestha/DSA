class Solution {
public:
    bool canConstruct(string r, string m) {
        unordered_map<char, int> map;

        int l1 = r.length();
        int l2 = m.length();

        for(int i=0; i<l2; i++){
            map[m[i]]++;
        }

        for(int i=0; i<l1; i++){
            if(map[r[i]]){
                map[r[i]]--;
            }
            else{
                return false;
            }
        }

        return true;
    }
};