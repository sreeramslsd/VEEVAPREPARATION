import java.util.*;

class Solution {
    public int totalFruit(int[] fruits) {

        int l = 0;
        int r = 0;
        int max = 0;

        Map<Integer, Integer> hm = new HashMap<>();

        while (r < fruits.length) {

            hm.put(fruits[r], r);

            if (hm.size() > 2) {

                int min = fruits.length;

                for (int value : hm.values()) {
                    if (value < min) {
                        min = value;
                    }
                }

                int removeFruit = fruits[min];

                hm.remove(removeFruit);

                l = min + 1;
            }

            int length = r - l + 1;

            if (length > max) {
                max = length;
            }

            r++;
        }

        return max;
    }
} 