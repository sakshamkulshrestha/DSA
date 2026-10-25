class Solution {
    public int minDistance(String word1, String word2) {
        int n1 = word1.length();
        int n2 = word2.length();

        int[][] dp = new int[n1 + 1][n2 + 1];

        for(int i1 = 1; i1 <= n1; i1++) dp[i1][0] = i1;
        for(int i2 = 1; i2 <= n2; i2++) dp[0][i2] = i2;

        for(int i1 = 1; i1 <= n1; i1++){
            for(int i2 = 1; i2 <= n2; i2++){
                char c1 = word1.charAt(i1 - 1);
                char c2 = word2.charAt(i2 - 1);

                if(c1 == c2){
                    dp[i1][i2] = dp[i1 - 1][i2 - 1];
                }
                else{
                    int del = dp[i1 - 1][i2];
                    int ins = dp[i1][i2 - 1];
                    int rep = dp[i1 - 1][i2 - 1];

                    int min;
                    if(del < ins) min = del;
                    else min = ins;

                    if(rep < min) min = rep;

                    dp[i1][i2] = min + 1;
                }
            }
        }

        return dp[n1][n2];


    }
}