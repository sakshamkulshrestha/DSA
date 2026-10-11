class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> map;

        for(int val : deck){
            map[val]++;
        }

        for(int x = 2; x <= deck.size(); x++){
            bool valid = true;

            for(auto val : map){
                if(val.second % x != 0){
                    valid = false;
                    break;
                }
            }

            if(valid) return true;
        }

        return false;
    }
};
