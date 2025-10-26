/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* detectCycle(struct ListNode *head) {
    struct ListNode*temp1=head;
    struct ListNode*temp2=head;
    while(temp1!=NULL && temp1->next!=NULL)
    {
        temp2=temp2->next;
        temp1=temp1->next->next;
        if(temp1==temp2){
        temp2=head;
        while(temp1!=temp2)
        {
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return temp1;
        }
        
    }
    return NULL;
}
