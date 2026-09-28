int digs(int n){
    int c = 0;
    while(n>0){
        c++;
        n /= 10;
    }

    return c;
}
class Solution {
public:
    int minElement(vector<int>& v) {
        // sort(v.begin(), v.end());
        int sum = INT_MAX;

        for(int i=0; i<v.size(); i++){
            int c = v[i];
            int add = 0;

            while(c--){
                add += v[i] % 10;
                v[i] /= 10;
            }

            v[i] = add;
            if(add < sum) sum = add;
        }

        return sum;
    }
};