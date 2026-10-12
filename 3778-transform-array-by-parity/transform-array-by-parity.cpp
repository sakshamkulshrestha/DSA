class Solution {
public:
    vector<int> transformArray(vector<int>& v) {
        int zero = 0;
        int one = 0;

        for(int i=0; i<v.size(); i++){
            if(v[i] % 2 == 0){
                v[i] = 0;
                zero++;
            }
            else{
                v[i] = 1;
                one++;
            }
        }

        for(int i=0; i<zero; i++){
            v[i] = 0;
        }
        for(int i=zero; i<zero+one; i++){
            v[i] = 1;
        }

        return v;
    }
};