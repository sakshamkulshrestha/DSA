class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> map;
        int n = s.size();

        int maxV = 0;
        int maxC = 0;

        for(char a : s){
            if(map.count(a)) map[a]++;
            else map[a] = 1;

            if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') maxV = map[a];
            else maxC = map[a];
        }

        for(auto val : map){
            if(val.first == 'a' || val.first == 'e' || val.first == 'i' || val.first == 'o' || val.first == 'u'){
                if(val.second > maxV) maxV = val.second;
            }
            else{
                if(val.second > maxC) maxC = val.second;
            }
        }

        return maxV + maxC;


    }
};