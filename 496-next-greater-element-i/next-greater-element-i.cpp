class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();

        vector<int> ans(n1);

        for(int i=0; i<n1; i++){
            for(int j=0; j<n2; j++){
                if(nums1[i] == nums2[j]){
                    stack<int> s;

                    for(int k=n2-1; k>=j; k--){
                        while(!s.empty() && s.top() <= nums2[k]){
                            s.pop();
                        }

                        if(s.empty()){
                            ans[i] = -1;
                        }
                        else{
                            ans[i] = s.top();
                        }

                        s.push(nums2[k]);
                    }
                }
            }
        }

        return ans;
    }
};