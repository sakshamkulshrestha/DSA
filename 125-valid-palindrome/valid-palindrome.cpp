class Solution {
public:
    bool isPalindrome(string s) {
        string newS;

        for (char c : s) {
            char ch = tolower((unsigned char)c);

            if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
                newS.push_back(ch);   // append
            }
        }

        string revS = newS;           // make copy
        reverse(revS.begin(), revS.end());

        if (newS == revS) {
            return true;
        }
        return false;
    }
};