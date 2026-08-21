class Solution {
public:
    int addDigits(int n){
        while (n > 9) {
            int val = 0;
            while(n > 0){
                val += n % 10;
                n /= 10;
            }
            n = val;
        }
        
        return n;
    }
};