int min3(int a, int b, int c){
    return min((min(a, b)), min(b, c));
}

class Solution {
public:
    int minimumDeletions(vector<int>& v) {
        int n = v.size();

        int minVal = INT_MAX;
        int maxVal = INT_MIN;

        int maxIdx = 0;
        int minIdx = 0;

        for(int i=0; i<n; i++){
            if(v[i] > maxVal){
                maxVal = v[i];
                maxIdx = i;
            }
            if(v[i] < minVal){
                minVal = v[i];
                minIdx = i;
            }
        }

        // both are from left
        int left = min(minIdx, maxIdx) + 1 + max(minIdx, maxIdx) - min(minIdx, maxIdx);

        // both are from right
        int right = n - max(minIdx, maxIdx) + max(minIdx, maxIdx) - min(minIdx, maxIdx);

        // one from right and one from left
        int both = min(minIdx, maxIdx) + 1 + n - max(minIdx, maxIdx);

        int ans = min3(left, right, both);
        return ans;
    }
};