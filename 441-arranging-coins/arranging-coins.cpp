class Solution {
public:
    int arrangeCoins(long long n) {
        return (sqrt(8*n + 1) - 1) / 2;
    }
};