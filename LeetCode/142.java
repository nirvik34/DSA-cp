/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode detectCycle(ListNode head) {
        ListNode slow = head;
        ListNode fast = head;
        while(fast != null && fast.next != null){
            slow = slow.next;
            fast = fast.next.next;
            if(slow == fast){
                slow = head;
                while(slow != fast){
                    slow = slow.next;
                    fast =   fast.next;
                }
                return slow;
            }
            
        }
        return null;
        
    }

}

//approach use two pointers, one slow and one fast. Move the slow pointer by one step and the fast pointer by two steps. If there is a cycle, the fast pointer will
//  eventually meet the slow pointer. Once they meet, move the slow pointer back to the head and keep the fast pointer at the meeting point. Move both pointers one step at a time until they meet again. The point at which they meet will be the start of the cycle.
//  If there is no cycle, return null.