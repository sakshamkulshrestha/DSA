class Solution {
public:
    int removeDuplicates(vector<int> &v) {
        int k=2;

        if(v.size()<=2){ 
            return v.size();
        }

        for(int i=2; i<v.size(); i++){
            if(v[i] != v[k-2]){
                v[k] = v[i];
                k++;
            }
        }

        return k;       
    }
};