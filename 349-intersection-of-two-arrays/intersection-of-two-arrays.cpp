class Solution {
public:
    vector<int> intersection(vector<int>& v1, vector<int>& v2) {
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        vector<int> ans;
        unordered_map<int, int> map;
        
        int i=0, j=0;
        while(i<v1.size() && j<v2.size()){
            if(v1[i] == v2[j]){
                if(map.count(v1[i]) > 0){
                    
                }
                else{
                    map.insert({v1[i], 1});
                }
                i++;
                j++;
            }
            else if(v1[i] > v2[j]){
                j++;
            }
            else{
                i++;
            }
        }

        for(auto val : map){
            ans.push_back(val.first);
        }
        return ans;
    }
};