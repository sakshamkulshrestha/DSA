class Solution {
public:
    void nextPermutation(vector<int>& v) {
        int n = v.size();
        if(n <= 1) return;

        int f = n - 2;

        while(f >= 0 && v[f] >= v[f + 1]){
            f--;
        }

        if(f < 0){
            reverse(v.begin(), v.end());
            return;
        }

        int s = n - 1;
        while(v[s] <= v[f]){
            s--;
        }

        swap(v[f], v[s]);
        reverse(v.begin() + f + 1, v.end());
        return;
    }
};