class Solution {
public:
    double findMaxAverage(vector<int>& v, int k) {
        int n = v.size();

        double kSum = 0;
        for(int i=0; i<k; i++){
            kSum += v[i];
        }

        double maxAvg = kSum / k;
        for(int i=1; i<n-k+1; i++){
            kSum -= v[i-1];
            kSum += v[i+k-1];

            if(kSum / k > maxAvg){
                maxAvg = kSum / k;
            }
        }

        return maxAvg;
    }
};