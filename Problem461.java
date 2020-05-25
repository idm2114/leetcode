class Solution {
    public int hammingDistance(int x, int y) {
        int out = x ^ y; 
        String output = Integer.toBinaryString(out);
        int count = 0;
        for (int i = 0; i < output.length(); i++) {
            if (output.charAt(i) == '1') 
                count++;
        }
        return count;
    }
}
