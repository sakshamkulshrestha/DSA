class Solution {
    public List<Integer> findDuplicates(int[] v) {
        List<Integer> ans = new ArrayList<>();

        for(int x : v){
            int idx = Math.abs(x) - 1;
            if(v[idx] < 0){
                ans.add(idx + 1);
            }
            else{
                v[idx] = -v[idx];
            }
        }
        return ans;
    }
}