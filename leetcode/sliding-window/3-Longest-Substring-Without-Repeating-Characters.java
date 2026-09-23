class Solution {
    public int lengthOfLongestSubstring(String s) {

        int l = 0;
        int r = 0;
        int max = 0;

        HashMap<Character, Integer> hm = new HashMap<>();

        while (r < s.length()) {

            char ch = s.charAt(r);

            if (hm.containsKey(ch)) {
                l = Math.max(l, hm.get(ch) + 1);
            }

            hm.put(ch, r);

            int length = r - l + 1;
            max = Math.max(max, length);

            r++;
        }

        return max;
    }
}