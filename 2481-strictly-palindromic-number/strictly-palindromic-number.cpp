string baseK(int n, int k) {
    string ans = "";

    while (n > 0) {
        ans += char('0' + (n % k));
        n /= k;
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

bool palindrome(string s){
    int size = s.size();

    int st = 0;
    int end = size-1;

    while(st <= end){
        if(s[st] != s[end]) return false;
        st++;
        end--;
    }

    return true;
}


class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        for(int i=2; i<=n-2; i++){
            string a = baseK(n, i);
            if(palindrome(a)) continue;
            else return false;
        }

        return true;
    }
};