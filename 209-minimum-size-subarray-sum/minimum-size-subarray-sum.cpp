class Solution {
public:
    int minSubArrayLen(int t, vector<int>& v) {
        int n = v.size();
        int minT = INT_MAX;
        int left = 0;
        int sum = 0;


        for(int i=0; i<n; i++){
            sum += v[i];
            while(sum >= t){
                int len = i-left+1;
                minT = min(minT, len);

                sum -= v[left];
                left++;
            }
        }

        if(minT == INT_MAX) return 0;
        return minT;
    }
};