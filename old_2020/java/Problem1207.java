class Solution {
    public boolean uniqueOccurrences(int[] arr) {
        
        boolean unique = true;
        
        Arrays.sort(arr); 
        
        if (arr.length == 2 && arr[0] != arr[1]) {
            return false;
        }
        
        int temp = arr[0];
        int count = 1;
        ArrayList<Integer> a = new ArrayList<Integer>();
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] != temp) {
                if (!a.contains(count)) {
                    a.add(count);
                }
                else {
                    unique = false;
                    break;
                }
                count = 1;
                temp = arr[i];
            }
            else {
                count++;
            }
        }
        return unique;
    }
}
