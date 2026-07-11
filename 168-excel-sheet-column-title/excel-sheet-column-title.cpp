class Solution {
public:
    string convertToTitle(int num) {
        string ans;

        while(num>0){
            num--; 
            ans += char('A' + (num % 26));
            num /= 26;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};