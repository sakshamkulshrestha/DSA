class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }

        string s;
        while(x>0){
            s += char('0' + x % 10);
            x /= 10;
        }

        int st=0, end=s.length()-1;
        while(st<end){
            if(s[st++] == s[end--]){
                continue;
            }
            else{
                return false;
            }
        }

        return true;
    }
};