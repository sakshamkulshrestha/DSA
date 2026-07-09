class Solution {
public:
    bool isSubsequence(string s, string t) {
        int tSize = t.length();
        int sSize = s.length();

        if(s.empty()){
            return true;
        }

        int idxS = 0;
        int idxT = 0;

        while(idxS < sSize && idxT < tSize){
            if(s[idxS] == t[idxT]){
                idxS++;
                idxT++;
            }
            else{
                idxT++;
            }

            if(idxS == sSize){
                return true;
            }
        }

        return false;
    }
};