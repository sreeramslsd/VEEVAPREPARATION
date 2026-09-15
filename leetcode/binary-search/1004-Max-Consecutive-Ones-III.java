class Solution {
    public int longestOnes(int[] nums, int k) {

        int l = 0;
        int r = 0;
        int count0 = 0;
        int max = 0;

        while (r < nums.length) {

            if (nums[r] == 0) {
                count0++;
            }

            while (count0 > k) {

                if (nums[l] == 0) {
                    count0--;
                }

                l++;
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