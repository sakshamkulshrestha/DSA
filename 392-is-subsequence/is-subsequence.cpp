class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int m = t.size();

        int si = 0;
        int ti = 0;

        while(si < n && ti < m){
            if(s[si] == t[ti]){
                si++;
                ti++;
            }
            else{
                ti++;
            }
        }

        if(si == n){
            return true;
        }

        return false;
    }
};