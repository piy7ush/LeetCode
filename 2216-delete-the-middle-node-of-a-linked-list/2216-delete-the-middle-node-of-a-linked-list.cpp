/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        vector<int>ans;
        while(head!=NULL){
            ans.push_back(head->val);
            head = head->next;
        }

        ans.erase(ans.begin()+(ans.size()/2));

        ListNode*head1 = NULL;
        ListNode*tail = NULL;
        for(auto XXX: ans){
            ListNode* n = new ListNode(XXX);
            if(head1==NULL){
                head1 = n;
                tail = n;
            }
            else{
                tail->next = n;
                tail = n;
            }
        }
        return head1;
    }
};