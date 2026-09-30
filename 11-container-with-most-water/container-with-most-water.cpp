class Solution {
public:
    int maxArea(vector<int>& h){
        int st = 0;
        int end = h.size() - 1;

        int area = 0;
        while(st < end){
            int w = end - st;
            int newA = w * min(h[st], h[end]);
            area = max(area, newA);

            if(h[st] < h[end]) st++;
            else end--;
        }

        return area;
    }
};