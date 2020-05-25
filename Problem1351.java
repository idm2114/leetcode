// time complexity -- big O (N + M)

class Solution {
    public int countNegatives(int[][] grid) {
        int count = 0;
        for (int i = 0; i < grid.length; i++) {
            int [] temp = grid[i];
            for (int j = temp.length-1; j >= 0; j--) {
                if (temp[j] >= 0) {
                    break;
                }
                else {
                    count++;
                }
            }
        }
        return count;
    }
}
