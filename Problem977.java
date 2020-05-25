class Solution {
    public int[] sortedSquares(int[] A) {
        int [] sorted = new int [A.length];
        for (int i = 0; i < A.length; i++) {
            sorted[i] = A[i] * A[i];
        }
        Arrays.sort(sorted);
        return sorted;
    }
}
