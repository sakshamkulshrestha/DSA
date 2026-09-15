class Solution {
public:
    string intToRoman(int n){
        vector<int> v = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

        vector<string> symbols = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

        string ans;

        for(int i=0; i<v.size(); i++){
            while(n >= v[i]){
                ans += symbols[i];
                n -= v[i];
            }
        }

        return ans;
    }
};