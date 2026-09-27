class Solution {
    public String getHint(String secret, String guess) {

        int bulls = 0;

        HashMap<Character, Integer> hm = new HashMap<>();

        for(int i=0;i<secret.length();i++)
        {
            if(secret.charAt(i)==guess.charAt(i))
            {
                bulls++;
            }
            else
            {
                hm.put(secret.charAt(i), hm.getOrDefault(secret.charAt(i),0)+1);
            }
        }

        int cows = 0;

        for(int i=0;i<guess.length();i++)
        {
            if(secret.charAt(i)!=guess.charAt(i))
            {
                char ch = guess.charAt(i);

                if(hm.containsKey(ch))
                {
                    cows++;

                    hm.put(ch, hm.get(ch)-1);

                    if(hm.get(ch)==0)
                    {
                        hm.remove(ch);
                    }
                }
            }
        }

        return bulls + "A" + cows + "B";
    }
}