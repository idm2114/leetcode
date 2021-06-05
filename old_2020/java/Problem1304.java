class Solution {
    public int[] sumZero(int n) {
        int [] out = new int[n];
        int num = 1;
        for (int i = 0; i < n-1; i+=2) {
            out[i] = num;
            out[i+1] = -1*num;
            num++;
        }
        if (n % 2 != 0) {
            out[n-1] = 0;
        }
    return out;
    }
}
