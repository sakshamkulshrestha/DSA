class Solution {
    public List<Integer> findDuplicates(int[] v) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for(int a : v){
            if(map.containsKey(a)) map.put(a, map.get(a) + 1);
            else map.put(a, 1);
        }

        ArrayList<Integer> ans = new ArrayList<>();

        for (Map.Entry<Integer, Integer> e : map.entrySet()) {
            int key   = e.getKey();
            int value = e.getValue();

            if(value == 2) ans.add(key);
        }

        return ans;
    }
}