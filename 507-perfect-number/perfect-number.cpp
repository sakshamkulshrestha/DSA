class Solution {
public:
    bool checkPerfectNumber(int num) {
        int n = num;

        unordered_map<int, int> map;
        int prime = 1;
        while(n > prime){
            if(n%prime == 0){
                map[prime] = 1;
            }
            prime++;
        }

        int sum = 0;
        for(auto val : map){
            sum += val.first;
        }

        if(sum == num){
            return true;
        }
        return false;
    }
};