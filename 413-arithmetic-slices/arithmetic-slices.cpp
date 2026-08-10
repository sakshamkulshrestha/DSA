class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& v) {
        int n = v.size();
        if(n < 3){
            return 0;
        }

        int d = v[1] - v[0];
        int len = 2;
        int ans = 0;

        for(int i=2; i<n; i++){
            int currDiff = v[i] - v[i-1];
            if(d == currDiff){
                len++;
                if(len >= 3){
                    ans += len-2;
                }
            }
            else{
                d = currDiff;
                len = 2;
            }
        }

        return ans;
    }
};