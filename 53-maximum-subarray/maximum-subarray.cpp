class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cSum = 0;
        int mSum = INT_MIN;
        
        for(int val : nums){
            cSum += val;
            if (cSum > mSum){
                mSum = cSum;
            }
            if(cSum < 0){
                cSum = 0;
            }
        }
        return mSum;
    }
};