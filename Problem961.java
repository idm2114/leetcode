class Solution {
    public int repeatedNTimes(int[] A) {
        int n = A.length / 2;
        Arrays.sort(A);
        int count = 1;
        int out = 0;
        int temp = A[0];
        for (int i = 1; i < A.length; i++) {
            if (A[i] == temp) {
                count++;
                if (count == n) {
                    out = A[i];
                }
            }
            else if (A[i] != temp) {
                count = 1;
                temp = A[i];
            }
        }
        return out;
    }
}
