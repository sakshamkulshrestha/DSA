int countDig(int n){
    int count = 0;
    while(n > 0){
        count++;
        n /= 10;
    }

    return count;
}

class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int, bool> map;

        int sum = 0;
        while(sum != 1){
            int dig = countDig(n);
            sum = 0;

            while(dig--){
                int a = n % 10;
                sum += a * a;
                n /= 10;
            }

            n = sum;

            if(map.count(sum)) return false;
            else map[sum] = true;
        }

        return true;
    }
};