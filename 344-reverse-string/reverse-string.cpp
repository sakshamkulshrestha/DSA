class Solution {
public:
    void reverseString(vector<char>& s) {
        int st = 0;
        int last = s.size()-1;

        while(st < last){
            char a = s[st];
            s[st] = s[last];
            s[last] = a;

            st++;
            last--;
        }

        return;
    }
};