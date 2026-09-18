class Solution {
public:
    int findDuplicate(vector<int>& v) {
        int slow = 0;
        int fast = 0;

        while(true){
            slow = v[slow];
            fast = v[v[fast]];

            if(slow == fast) break;
        }

        slow = 0;

        while(slow != fast){
            slow = v[slow];
            fast = v[fast];
        }

        return slow;
    }
};