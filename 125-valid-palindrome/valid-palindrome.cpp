class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        for(char c : s){
            if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) a += tolower(c);
            else if(c >= '0' && c <= '9') a += c;
        }

        int st = 0;
        int end = a.size()-1;

        while(st < end){
            if(a[st] != a[end]) return false;
            st++;
            end--;
        }

        return true;
    }
};