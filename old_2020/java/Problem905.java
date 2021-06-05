// horrible time and space complexity

class Solution {
    public int[] sortArrayByParity(int[] A) {
        ArrayList<Integer> odd = new ArrayList<Integer>();
        ArrayList<Integer> even = new ArrayList<Integer>();

        int [] ans = new int[A.length];

        for (int i = 0; i < A.length; i++) {
            if (A[i] % 2 == 0 && A[i] != 1) {
                even.add(A[i]);
            }
            else {
                odd.add(A[i]);
            }
        }

        for (int j = 0; j < even.size(); j++) {
            ans[j] = even.get(j);
        }

        int count = 0;
        for (int k = even.size(); k < ans.length; k++) {
            ans[k] = odd.get(count);
            count++;
        }
        return ans;
    }
}
