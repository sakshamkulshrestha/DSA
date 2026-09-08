class Solution {
public:
    vector<int> pivotArray(vector<int>& v, int p) {
        int n = v.size();
        if(n == 0) return v;

        vector<int> ans;
        vector<int> list2;
        vector<int> pvt;

        for(int val : v){
            if(val < p){
                ans.push_back(val);
            }
            else if(val == p){
                pvt.push_back(val);
            }
            else{
                list2.push_back(val);
            }
        }
        
        for(int val : pvt){
            ans.push_back(val);
        }
        for(int val : list2){
            ans.push_back(val);
        }

        return ans;
    }
};