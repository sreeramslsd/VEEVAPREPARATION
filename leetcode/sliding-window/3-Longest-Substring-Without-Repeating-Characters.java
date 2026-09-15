import java.util.*;

class Solution {
    public int lengthOfLongestSubstring(String s) {

        Map<Character, Integer> hm = new HashMap<>();

        int l = 0;
        int r = 0;
        int max = 0;

        while (r < s.length()) {

            if (hm.containsKey(s.charAt(r))) {

                int newLeft = hm.get(s.charAt(r)) + 1;

                if (newLeft > l) {
                    l = newLeft;
                }
            }

            hm.put(s.charAt(r), r);

            int len = r - l + 1;

            if (len > max) {
                max = len;
            }

            r++;
        }

        return max;
    }
}