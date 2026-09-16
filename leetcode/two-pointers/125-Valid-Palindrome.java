class Solution {
    public boolean isPalindrome(String s) {
        
        String a = s.replaceAll("[^a-zA-Z0-9]","");
        a=a.toLowerCase();

        int l=0;

        int r=a.length()-1;

        while(l<r)
        {
            if(a.charAt(r)!=a.charAt(l))
            return false;

            if(a.charAt(r)==a.charAt(l))
            {
                l++;
                r--;
            }
        }


return true;





    }
}