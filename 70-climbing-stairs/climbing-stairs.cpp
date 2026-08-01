long long combination(vector<int> &v){
    int ones = 0;
    int twos = 0;

    for(int val : v){
        if(val == 1){
            ones++;
        }
        else{
            twos++;
        }
    }

    int n = ones + twos;
    int r = min(ones, twos);

    long long ans = 1;
    for(int i = 1; i <= r; i++){
        ans = ans * (n - r + i) / i;
    }

    return ans;
}

bool doubleOne(vector<int> &v){
    sort(v.begin(), v.end());

    int count = 0;
    for(int a : v){
        if(a == 1){
            count++;
        }
    }

    if(count >= 2){
        vector<int> newV;
        newV.push_back(2);
        
        int skipped = 0;
        for(int val : v){
            if(val == 1 && skipped < 2){
                skipped++;
            }
            else{
                newV.push_back(val);
            }
        }
        
        v = newV;
        return true;
    }
    return false;
}

class Solution {
public:
    int climbStairs(int n) {
        long long total = 0;
        vector<int> v(n, 1);
        
        total += combination(v);

        while(doubleOne(v)){
            total += combination(v);
        }

        return total;
    }
};