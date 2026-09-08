class Solution {
public:
    string reversePrefix(string s, char ch) {
        int n = s.size();
        int idx;

        bool notFound = true;
        for(int i=0; i<n; i++){
            if(s[i] == ch){
                idx = i;
                notFound = false;
                break;
            }
        }

        if(notFound) return s;

        int st = 0;
        int end = idx;

        while(st <= end){
            swap(s[st], s[end]);
            st++; end--;
        }

        return s;
    }
};