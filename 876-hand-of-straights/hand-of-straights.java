class Solution {
    public boolean isNStraightHand(int[] hand, int groupSize) {
        if(hand.length % groupSize != 0) return false;

        HashMap<Integer, Integer> map = new HashMap<>();
        for(int v : hand){
            if(map.containsKey(v)) map.put(v, map.get(v) + 1);
            else map.put(v, 1);
        }

        int val = Collections.min(map.keySet());
        int grp = groupSize;

        while(!map.isEmpty()){
            if(grp == 0){
                int minKey = Collections.min(map.keySet());
                val = minKey;
                grp = groupSize;
            }

            if(map.containsKey(val)){
                if(map.get(val) == 0) return false;
                else{
                    int newFreq = map.get(val) - 1;
                    if (newFreq == 0) map.remove(val);
                    else map.put(val, newFreq);
                    val++;
                }
            }
            else return false;
            grp--; 
        }

        return grp == 0;
    }
}