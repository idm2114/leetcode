class Solution {
    public List<String> buildArray(int[] target, int n) {
        ArrayList<String> a = new ArrayList<String>();
        int loc = 0;
        for (int i = 1; i <= n; i++) {
            a.add("Push");
            if (target[loc] != i) {
                a.add("Pop");
            }
            else {
                loc++;
                if (loc >= target.length) {
                break;
                }
            }
        }
        return a;
    }
}
