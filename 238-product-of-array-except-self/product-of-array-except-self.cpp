class Solution {
public:
    vector<int> productExceptSelf(vector<int>& v) {
        int n = v.size();
        bool isOneZero = false;
        bool isTwoZero = false;
        bool noZero = false;

        int zeroCount = 0;
        for(int i=0; i<n; i++){
            if(v[i] == 0){
                zeroCount++;
            }
            if(zeroCount > 1){
                isTwoZero = true;
                break;
            }
        }

        if(zeroCount == 1){
            isOneZero = true;
        }
        else if(zeroCount == 0){
            noZero = true;
        }

        if(isTwoZero){
            vector<int> ans(n, 0);
            return ans;
        }
        else if(isOneZero){
            int prod = 1;
            int idx;
            for(int i=0; i<n; i++){
                if(v[i] == 0){
                    idx = i;
                }
                else{
                    prod *= v[i];
                }
            }

            vector<int> ans(n, 0);
            ans[idx] = prod;

            return ans;
        }
        
        vector<int> ans(n);
        int prod = 1;
        for(int i=0; i<n; i++){
            prod *= v[i];
        }

        for(int i=0; i<n; i++){
            ans[i] = prod/v[i];
        }
        return ans;

    }
};