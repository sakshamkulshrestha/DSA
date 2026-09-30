class Solution {
public:
    vector<int> twoSum(vector<int>& v, int t) {
        vector<int> ans(2, -1);
        int n = v.size();

        int st = 0;
        int end = n-1;

        while(st <= end){
            if((v[end] + v[st]) > t) end--;
            else if(v[st] + v[end] < t) st++;
            else if(v[st] + v[end] == t){
                ans[0] = st+1;
                ans[1] = end+1;
                break;
            }
        }

        return ans;
    }
};