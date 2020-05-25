// very simple solution, could probably be better runtime using hashmap

class Solution {
    public boolean judgeCircle(String moves) {
        int xloc = 0;
        int yloc = 0;
        boolean bool = true;
        for (int i = 0; i < moves.length(); i++) {
            if (moves.charAt(i) == 'U') {
                yloc++;
            }
            else if (moves.charAt(i) == 'D') {
                yloc--;
            }
            else if (moves.charAt(i) == 'L') {
                xloc--;
            }
            else {
                xloc++;
            }
        }
        if (xloc != 0 || yloc != 0) {
             bool = false;
        }
        return bool;
    }
}
