// poor space complexity, decent time complexity

class Solution {
    public List<Integer> selfDividingNumbers(int left, int right) {
        ArrayList<Integer> a = new ArrayList<Integer>();
        for (int i = left; i <= right; i++) {
            if (i < 10) {
                a.add(i);
            }
            else {
                int temp = i;
                boolean b = false;
                while (temp > 0) {
                    if (temp % 10 == 0) {
                        b = true;
                        break;
                    }
                    else if (i % (temp % 10) != 0) {
                        b = true;
                        break;
                    }
                    temp /= 10;
                }
                if (b == false) {
                    a.add(i);
                }
            }
        }
        return a;
    }
}
