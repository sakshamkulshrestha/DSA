class Solution {
public:
    void rotate(vector<int>& v, int k){
        if(v.size() == 1 || k == 0){
            return;
        }

        if(k > v.size()){
            k %= v.size();
            if(k == 0){
                return;
            }
        }

        int n = v.size();
        int idx = n-k;
        vector<int> ans(n);

        for(int i=0; i<n; i++){
            ans[i] = v[idx++];
            if(idx == n){
                idx = 0;
            }
        }

        v = ans;
        return;
    }
};