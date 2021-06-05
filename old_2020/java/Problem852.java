class Solution {
    public int peakIndexInMountainArray(int[] A) {
        boolean decrease = false;
        int inflection = 0;
        if (A.length < 3) {
            return 0;
        }
        for (int i = 0; i < A.length-1; i++) {
            if (!decrease) {
                if (A[i] < A[i+1]) {
                    continue;
                }
                else {
                    decrease = true;
                    inflection = i;
                }
            }
            if (decrease) {
                if (A[i] > A[i+1]) {
                    continue;
                }
                else return 0;
            }
        }
        return inflection;
    }
}



/* 
significantly more simple solution

class Solution {
    public int peakIndexInMountainArray(int[] A) {
        for(int i=0; i< A.length-1; i++){
            if(A[i] > A[i+1]){
                return i;
            }
        }

        return -1;
    }
}

*/
