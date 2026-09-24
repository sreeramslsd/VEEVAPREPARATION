class Solution {
    public ListNode deleteDuplicates(ListNode head) {

        if(head == null || head.next == null)
            return head;

        ListNode temp = head;
        ListNode dummy = null;

        while(temp != null) {

                if(temp.next != null &&temp.val==temp.next.val)
                {
                    int value = temp.val;

                    while(temp != null &&temp.val==value)
                    {
                        temp=temp.next;
                    }
                    if(dummy == null)
                    head = temp;
                else
                    dummy.next = temp;
 
                }

                else{

                    dummy=temp;
                    temp = temp.next;
                }
                 





            
        }

        return head;
    }
}