class Solution {
    public int[] maxSlidingWindow(int[] nums, int k) {

        int[] ans = new int[nums.length - k + 1];

        Deque<Integer> dq = new ArrayDeque<>();

        int i = 0;

        for (int r = 0; r < nums.length; r++) {

            // Remove elements outside the window
            while (!dq.isEmpty() && dq.peekFirst() < r - k + 1) {
                dq.pollFirst();
            }

            // Remove smaller elements
            while (!dq.isEmpty() && nums[dq.peekLast()] <= nums[r]) {
                dq.pollLast();
            }

            dq.addLast(r);

            // Window size becomes k
            if (r >= k - 1) {
                ans[i] = nums[dq.peekFirst()];
                i++;
            }
        }

        return ans;
    }
}