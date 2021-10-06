public class Solution {
    public boolean hasCycle(ListNode head) {
        ListNode a=head;
        
        ListNode b=head;
        
        while(a!=null&&b!=null&&b.next!=null){
            a=a.next;
            b=b.next.next;
            if(a==b){
                return true;
            }
        }
        return false;
    }
}
