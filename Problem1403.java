// total headache to code because Collections only works with wrapper classes

class Solution {
    public List<Integer> minSubsequence(int[] nums) {
        int sum = 0;
        for (int i = 0; i < nums.length; i++) {
            sum += nums[i];
        }
        Integer [] typed = Arrays.stream(nums).boxed().toArray(Integer[]::new);
        Arrays.sort(typed, Collections.reverseOrder()); 
        int smallsum = 0;
        ArrayList<Integer> ints = new ArrayList<Integer>();
        for (int j = 0; j < typed.length; j++) {
            if (smallsum <= sum / 2) {
                smallsum += typed[j];
                ints.add(typed[j]);
            }
            else {
                break;
            }
        }
        return ints;
    }
}
