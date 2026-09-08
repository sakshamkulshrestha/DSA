class Solution {
public:
    string reversePrefix(string s, int k) {
        int st = 0;
        int end = k-1;

        while(st <= end){
            char a = s[st];
            s[st] = s[end];
            s[end] = a;

            st++;
            end--;
        }

        return s;
    }
};