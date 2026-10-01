class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        unordered_map<int, int> map;
        vector<int> v(2);

        for(int i=0; i<nums.size(); i++){
            int need = t-nums[i];
            if(map.count(need)){
                v[0] = i;
                v[1] = map[need];

                return v;
            }
            if(!map.count(nums[i])) map.emplace(nums[i], i);
        }

        return v; 
    }
};