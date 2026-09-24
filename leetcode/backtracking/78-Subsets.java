class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        
        List<List<Integer>> al = new ArrayList<>();
    al.add(new ArrayList<>());
    for(Integer num : nums)
    {
          int size = al.size();
          for(int i=0;i<size;i++)
          {
             ArrayList<Integer> sd = new ArrayList<>(al.get(i));        
                sd.add(num);
                al.add(sd);
          } 
    }
return al;


    }
}