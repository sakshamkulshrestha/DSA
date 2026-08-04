class Solution {
public:
    void moveZeroes(vector<int>& v) {
        int n = v.size();
        if(n == 1){
            return;
        }

        int f = 1;
        int s = 0;

        while(f < n){
            if(v[s] == 0 && v[f] != 0){
                swap(v[s], v[f]);
                f++;
                s++;
            }
            else if(v[s] != 0){
                s++;
                f++;
            }
            else{
                f++;
            }
        }

        return;
    }
};