class Solution {
public:
    int minimumOperations(vector<int>& v) {
        int sum = 0;
        for(int val : v){
            if(val%3 == 2) sum += 1;
            else sum += val%3;
        }

        return sum;
    }
};