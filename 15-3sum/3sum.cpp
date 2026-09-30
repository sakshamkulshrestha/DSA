class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
        vector<vector<int>> ans;

        sort(v.begin(), v.end());
        int n = v.size();

        for(int i=0; i<n-2; i++){

            if(i > 0 && v[i] == v[i-1]) continue;

            int st = i+1;
            int end = n-1;

            while(st < end){

                int sum = v[i] + v[st] + v[end];

                if(sum > 0){
                    end--;
                }
                else if(sum < 0){
                    st++;
                }
                else{
                    ans.push_back({v[i], v[st], v[end]});

                    st++;
                    end--;

                    while(st < end && v[st] == v[st-1])
                        st++;

                    while(st < end && v[end] == v[end+1])
                        end--;
                }
            }
        }

        return ans;
    }
};