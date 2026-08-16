class Solution {
public:
    vector<int> getConcatenation(vector<int> &a) {
        int n = a.size();
        vector<int> b(2*n);
        for(int i=0; i<n; i++){
            b[i] = a[i];
        }
        for(int i=n; i<2*n; i++){
            b[i] = a[i-n];
        }

        return b;
    }
};