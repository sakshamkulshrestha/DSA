class Solution {
    public int[] findThePrefixCommonArray(int[] A, int[] B) {
        int na = A.length;
        int nb = B.length;

        HashMap<Integer, Integer> a = new HashMap<>();
        HashMap<Integer, Integer> b = new HashMap<>();

        int[] ans = new int[na];
        // ans[0] = 0;
        int idx = 0;

        // if(na == 1) return ans;
        for(int t=0; t<na; t++){
            for(int i=0; i<=t; i++){
                a.put(A[i], 1);
            }
            for(int i=0; i<=t; i++){
                b.put(B[i], 1);
            }

            int count = 0;
            for(int key : a.keySet()){
                if (b.containsKey(key)) count++;
            }

            ans[idx++] = count;
        }

        return ans;
    }
}