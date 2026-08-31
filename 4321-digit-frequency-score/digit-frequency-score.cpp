class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int, int> map;

        int temp = n;
        while(temp > 0){
            int val = temp%10;
            
            if(map.count(val)){
                map[val]++;
            }
            else{
                map[val] = 1;
            }

            temp /= 10;
        }

        int ans = 0;
        for(auto val : map){
            int sum = val.first * val.second;
            ans += sum;
        }

        return ans;
    }
};