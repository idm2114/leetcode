// bad space complexity, uses 2 pointers to keep track of values

class Solution {
    public int[] diStringMatch(String S) {
        int [] a = new int [S.length()+1];
        int n = S.length();
        int left = 0;
        int right = S.length();
        for (int i = 0; i < S.length(); i++) {
            if (S.charAt(i)=='I') {
                a[i] = left;
                left++;
            }
            else {
                a[i] = right; 
                right--;
            }
        }
        a[S.length()] = left;
        return a;
    }
}
