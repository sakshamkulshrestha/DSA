class Solution {
    public int twoCitySchedCost(int[][] costs) {
        int n = costs.length / 2;
        Arrays.sort(costs, (x, y) -> Integer.compare(x[0] - x[1], y[0] - y[1]));

        int total = 0;
        for(int i=0; i<n; i++){
            total += costs[i][0];
        }

        for(int i=n; i < costs.length; i++){
            total += costs[i][1];
        }

        return total;
    }
}