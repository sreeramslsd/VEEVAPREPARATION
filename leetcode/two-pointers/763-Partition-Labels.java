import java.util.*;

class Solution {
    public List<Integer> partitionLabels(String s) {

        int[] last = new int[26];

        // Find last occurrence of every character
        for (int i = 0; i < s.length(); i++) {
            last[s.charAt(i) - 'a'] = i;
        }

        List<Integer> answer = new ArrayList<>();

        int start = 0;
        int end = 0;

        for (int i = 0; i < s.length(); i++) {

            int lastIndex = last[s.charAt(i) - 'a'];

            if (lastIndex > end)
                end = lastIndex;

            if (i == end) {
                answer.add(end - start + 1);
                start = i + 1;
            }
        }

        return answer;
    }
}