class Solution {
    public List<List<Integer>> subsets(int[] nums) {

        List<List<Integer>> al = new ArrayList<>();

        al.add(new ArrayList<>());

        for(int num : nums) {

            int size = al.size();

            for(int i = 0; i < size; i++) {

                List<Integer> temp = new ArrayList<>(al.get(i));

                temp.add(num);

                al.add(temp);
            }
        }

        return al;
    }
}