class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char, int> sMap;
        unordered_map<char, int> gMap;
        
        int x = 0;
        for(int i=0; i<secret.size(); i++){
            if(secret[i] == guess[i]) x++;
        }

        for(int i=0; i<secret.size(); i++){
            if(sMap.count(secret[i])) sMap[secret[i]]++;
            else sMap[secret[i]] = 1;
        }

        for(int i=0; i<guess.size(); i++){
            if(gMap.count(guess[i])) gMap[guess[i]]++;
            else gMap[guess[i]] = 1;
        }

        int y=0;
        for(auto a : gMap){
            if(sMap.count(a.first)){
                if(gMap[a.first] >= sMap[a.first]) y += sMap[a.first];
                else y += gMap[a.first];
            }
        }

        y -= x;

        string ans;
        ans += to_string(x);
        ans += 'A';
        ans += to_string(y);
        ans += 'B';

        return ans;
    }
};