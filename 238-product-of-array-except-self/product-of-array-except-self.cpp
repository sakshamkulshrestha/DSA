class Solution {
public:
    vector<int> productExceptSelf(vector<int>& v) {
        int n = v.size();
        vector<int> ans(n);

        int leftPro = 1;
        for(int i=0; i<n; i++){
            ans[i] = leftPro;
            leftPro *= v[i];
        }

        int rightPro = 1;
        for(int i=n-1; i>=0; i--){
            ans[i] *= rightPro;
            rightPro *= v[i];
        }

        return ans;
    }
};