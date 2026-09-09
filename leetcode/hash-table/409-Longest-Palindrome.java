class Solution {
    public int longestPalindrome(String s) {

        int[] freq = new int[128];

        // Count frequencies
        for (char ch : s.toCharArray()) {
            freq[ch]++;
        }

        int length = 0;
        boolean hasOdd = false;

        // Use pairs
        for (int count : freq) {

            length += (count / 2) * 2;

            if (count % 2 == 1) {
                hasOdd = true;
            }
        }

        // One odd character can go in the middle
        if (hasOdd) {
            length++;
        }

        return length;
    }
}
