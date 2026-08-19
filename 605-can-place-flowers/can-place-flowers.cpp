class Solution {
public:
    bool canPlaceFlowers(vector<int>& v, int n) {
        int size = v.size();
        int i = 1;

        if(size == 1){
            if(v[0] == 0 && n>0){
                n--;
                v[0] = 1;

                if(n==0){
                    return true;
                }
                else{
                    return false;
                }
            }
            else{
                if(n==0){
                    return true;
                }
                else{
                    return false;
                }
            }
        }

        if(v[0] == 0 && v[1] == 0 && n>0){
            n--;
            v[0] = 1;
        }
        if(v[size-1] == 0 && v[size-2] == 0 && n>0){
            n--;
            v[size-1] = 1;
        }

        while(n>0 && i<size){
            if(v[i] == 0 && v[i-1] == 0 && v[i+1] == 0){
                n--;
                v[i] = 1;
                i++;
            }
            else{
                i++;
            }
        }

        if(n==0){
            return true;
        }

        return false;
    }
};