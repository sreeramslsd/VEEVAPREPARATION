class Solution {
    public boolean isPalindrome(String s) {
        // 1. Clean the string: convert to lowercase and remove non-alphanumeric chars
        String m = s.toLowerCase().replaceAll("[^a-zA-Z0-9]", "");

        // 2. Set pointers based on the cleaned string's length
        int l = 0;
        int r = m.length() - 1;

        // 3. Move pointers toward the center
        while (l < r) {
            char ch = m.charAt(l);
            char ch1 = m.charAt(r);

            // Primitive chars use == or !=
            if (ch != ch1) {
                return false;
            }
            
            l++; // Move left pointer right
            r--; // Move right pointer left
        }

        return true;
    }
}
