class Solution {
    public int candy(int[] v) {
        int n = v.length;
        int[] c = new int[n];
        Arrays.fill(c, 1);

        // left pass
        for(int i=1; i<n; i++){
            if(v[i] > v[i-1]) c[i] = c[i-1] + 1;
        }

        // right pass
        for(int i=n-2; i>=0; i--){
            if(v[i] > v[i+1]) c[i] = Math.max(c[i], c[i+1] + 1);
        }

        int total = 0;
        for(int val : c){
            total += val;
        }

        return total;
    }
}