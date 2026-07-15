class Solution {
    public String[] findRelativeRanks(int[] v) {
        int n = v.length;
        HashMap<Integer, Integer> map = new HashMap<>();

        for(int i=0; i<n; i++){
            map.put(v[i], i);
        }

        ArrayList<Integer> arr = new ArrayList<>();
        for(int i=0; i<n; i++){
            arr.add(v[i]);
        }
        arr.sort(Collections.reverseOrder());
        
        String[] list = new String[n];
        HashMap<Integer, Integer> rank = new HashMap<>();

        for(int i=0; i<n; i++){
            rank.put(arr.get(i), i);
        }

        for(Map.Entry<Integer, Integer> entry : map.entrySet()){
            int ranking = rank.get(entry.getKey());
            if(ranking == 0){
                list[entry.getValue()] = "Gold Medal";
            }
            else if(ranking == 1){
                list[entry.getValue()] = "Silver Medal";
            }
            else if(ranking == 2){
                list[entry.getValue()] = "Bronze Medal";
            }
            else{
                list[entry.getValue()] = String.valueOf(rank.get(entry.getKey())+1);
            }
        }

        return list;
    }
}