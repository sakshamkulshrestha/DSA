class Solution {
public:
    int arrangeCoins(int n) {
        int c = 0;
        int i = 1;
        while(n > 0){
            c++;
            n -= i;
            i++;

            if(n < i) break;
        }

        return c;
    }
};