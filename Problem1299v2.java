// better runtime complexity

class Solution {
    public int[] replaceElements(int[] arr) {
        int [] out = new int[arr.length];
        int temp = 0; 
        out[out.length-1] = -1;
        
        for (int i = arr.length-1; i > 0; i--) {
            temp = Math.max(arr[i], temp);
            out[i-1] = temp;
        }
        return out;
    }
}
