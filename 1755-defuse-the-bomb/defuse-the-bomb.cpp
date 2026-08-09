class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> ans(n);
        int sum = 0;

        if(k<0){
            reverse(code.begin(), code.end());
        }

        int idx;
        for(int i=1; i<=abs(k); i++){
            idx = i%n;
            sum += code[idx];
        }
        ans[0] = sum;

        for(int i=1; i<n; i++){
            idx = (idx+1)%n;
            sum -= code[i];
            sum += code[idx];
            ans[i] = sum;
        }

        if(k<0){
            reverse(ans.begin(), ans.end());
        }
        return ans;
    }
};