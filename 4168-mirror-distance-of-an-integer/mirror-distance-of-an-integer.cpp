class Solution {
public:
    int mirrorDistance(int n) {
        int m = 0;
        int temp = n;

        while(temp > 0){
            m = m * 10 + temp%10;
            temp /= 10;
        }

        return abs(m-n);
    }
};