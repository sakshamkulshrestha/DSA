class Solution {
    public String[] sortPeople(String[] n, int[] h) {
        Map<Integer, String> map = new HashMap<>();
        for(int i=0; i<n.length; i++){
            map.put(h[i], n[i]);
        }

        List<Integer> v = new ArrayList<>();
        for(int i=0; i<h.length; i++){
            v.add(h[i]);
        }

        Collections.sort(v, Comparator.reverseOrder());
        for(int i=0; i<h.length; i++){
            n[i] = map.get(v.get(i));
        }

        return n;
    }
}