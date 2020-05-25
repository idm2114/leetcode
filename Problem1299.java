// horrible time complexity

class Solution {
    public int[] replaceElements(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            int temp = 0;
            for (int j = arr.length-1; j > i; j--) {
                if (arr[j] > temp) {
                    temp = arr[j];
                }
            }
            arr[i] = temp;
            if (i == arr.length-1) {
                arr[i] = -1;
            }
        }
        return arr;
    }
}
