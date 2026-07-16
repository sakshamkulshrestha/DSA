class Solution {
public:
    int missingNumber(vector<int>& v) {
        int n = v.size();
        int ans = 0;
        
        for(int i=0; i<n; i++){
            ans ^= v[i];
        }
        for(int i=0; i<=n; i++){
            ans ^= i;
        }

        return ans;
    }
};