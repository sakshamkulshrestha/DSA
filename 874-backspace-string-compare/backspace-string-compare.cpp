class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string sNew, tNew;

        for(int i=0; i<s.size(); i++){
            if(s[i] == '#'){
                if(sNew.empty()){
                    continue;
                }
                else{
                    sNew.pop_back();
                }
            }
            else{
                sNew.push_back(s[i]);
            }
        }

        for(int i=0; i<t.size(); i++){
            if(t[i] == '#'){
                if(tNew.empty()){
                    continue;
                }
                else{
                    tNew.pop_back();
                }
            }
            else{
                tNew.push_back(t[i]);
            }
        }

        if(sNew == tNew){
            return true;
        }

        return false;
    }
};