class Solution {
    public int threeSumClosest(int[] v, int t) {
        int n = v.length;
        int minDiff = Integer.MAX_VALUE;
        int bestSum = 0;

        Arrays.sort(v);
        for(int i=0; i<n-2; i++){
            if(i > 0 && v[i] == v[i-1]) continue;

            int st = i+1;
            int end = n-1;

            while(st < end){
                int sum = v[i] + v[st] + v[end];
                if(sum > t){
                    end--;
                }
                else if(sum < t){
                    st++;
                }
                else{
                    return sum;
                }
                
                int rClose = Math.abs(sum - t);
                if(rClose < minDiff){
                    minDiff = rClose;
                    bestSum = sum;
                }
            }
        }

        return bestSum;
    }
}