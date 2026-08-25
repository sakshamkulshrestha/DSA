int digits(int n){
    int dig = 0;
    while(n>0){
        dig++;
        n /= 10;
    }

    return dig;
}

bool condition(int n){
    int dig = digits(n);
    int num = n;

    while(dig--){
        int val = num%10;
        if(val == 0 || n%val != 0) return false;
        num /= 10;
    }

    return true;
}


class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;

        int num = left;
        while(num <= right){
            if(condition(num)){
                v.push_back(num);
            }
            num++;
        }

        return v;
    }
};