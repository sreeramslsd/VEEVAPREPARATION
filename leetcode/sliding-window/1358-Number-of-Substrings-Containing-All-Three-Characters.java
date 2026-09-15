import java.util.*;

class Solution {
    public int numberOfSubstrings(String s) {

        Map<Character, Integer> hm = new HashMap<>();

        int r = 0;
        int n = s.length();
        int count = 0;

        while (r < n) {

            hm.put(s.charAt(r), r);

            if (hm.size() == 3) {

                int minindex = n;

                for (Integer k : hm.values()) {
                    if (k < minindex) {
                        minindex = k;
                    }
                }

                count = count + minindex + 1;
            }

            r++;
        }

        return count;
    }
}