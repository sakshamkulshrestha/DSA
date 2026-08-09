class Solution {
public:
    int minOperations(vector<int>& v) {
        int n = v.size();
        int count = 0;
        
        for(int i=0; i<n-2; i++){
            if(v[i] == 0){
                v[i] ^= 1;
                v[i+1] ^= 1;
                v[i+2] ^= 1;
                count++;
            } 
        }

        for(int val : v){
            if(val == 0){
                return -1;
            }
        }

        return count;
    }
};