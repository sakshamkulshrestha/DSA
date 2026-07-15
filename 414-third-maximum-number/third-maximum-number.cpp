vector<int> removeDuplicates(vector<int> v){
    int n = v.size();
    int idx = 1;
    int count = 0;
    
    while(idx < n){
        if(v[idx] == v[idx-1]){
            v[idx-1] = INT_MIN;
            count++;
        }

        idx++;
    }

    sort(v.begin(), v.end());
    vector<int> newV;
    for(int i=count; i<n; i++){
        newV.push_back(v[i]);
    }

    return newV;
}
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        nums = removeDuplicates(nums);
        
        int n = nums.size();
        if(n < 3){
            return nums[n-1];
        }
        return nums[n-3];
    }
};