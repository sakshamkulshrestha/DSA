class Solution {
public:
    string largestNumber(vector<int> &v){
        vector<string> nums;

        for (int val : v){
            nums.push_back(to_string(val));
        }

        sort(nums.begin(), nums.end(), [](string a, string b){
            return a + b > b + a;
        });

        if(nums[0] == "0"){
            return "0";
        }

        string ans = "";

        for(string val : nums){
            ans += val;
        }

        return ans;
    }
};