class Solution {
public:
    void moveZeroes(vector<int>& v) {
        int n = v.size();
        if(n == 1) return;
        int left = 0;
        int right = 1;

        while(right <= n-1){
            if(v[left] == 0 && v[right] != 0){
                swap(v[left], v[right]);
                left++;
                right++;
            }
            else if(v[left] == 0 && v[right] == 0) right++;
            else{
                left++;
                right++;
            }
        }

        return;
    }
};