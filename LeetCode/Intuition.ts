# Intuition
<!-- Describe your first thoughts on how to solve this problem. 
-->

# Approach

# Complexity
- Time complexity:
<!--·‌Add·‌your·‌time·‌complexity·‌here,·‌e.g.·‌$$O(n)$$·‌-->

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code
```c []
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int getDiff(struct ListNode *head1,struct ListNode *head2){
    int len1 = 0,len2 = 0;
    while(head1!=NULL || head2!= NULL){
        if(head1!=NULL){
Find the length of both lists.
Find the positive difference between these lengths.
Move the dummy pointer of the larger list by the difference 
achieved. This makes our search length reduced to a smaller 
list length.
Move both pointers, each pointing two lists, ahead 
simultaneously if both do not collide.
            ++len1;
            head1 = head1->next;
        }
        if(head2!=NULL){