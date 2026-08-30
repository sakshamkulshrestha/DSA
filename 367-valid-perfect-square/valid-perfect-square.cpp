class Solution {
public:
    bool isPerfectSquare(int n){
        for(int i=1; 1LL*i*i<=n; i++){
            if(i*i == n) return true;
        }

        return false;
    }
};