/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public: 
    struct ListNode* removeNthFromEnd(struct ListNode* head, int n){

    if(head->next == NULL) return NULL;

    struct ListNode* tmp = head;
    struct ListNode* cur = head;
    int i = 0;
    while(tmp)
    {
        i++;
        tmp = tmp->next;
    }
    int j = 0;

    if(n == i) return head->next;
    while(cur)
    {
        if(j + 1  == i - n)
        {
            if(cur->next->next) cur->next = cur->next->next;
            else
            {
                cur->next = NULL;
                break;
            }
        }
        j++;
        cur = cur->next;
    }

    return head;
}
};
