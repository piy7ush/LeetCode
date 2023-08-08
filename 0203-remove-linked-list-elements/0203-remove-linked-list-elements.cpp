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
    ListNode* removeElements(ListNode* head, int val) {
        vector<int>ans;
        while(head!=NULL){
            ans.push_back(head->val);
            head = head->next;
        }
        vector<int>ans2;
        for(int i=0;i<ans.size();i++){
            if(ans[i]==val){
                continue;
            }
            else{
                ans2.push_back(ans[i]);
            }
        }

        ListNode*head1 = NULL;
        ListNode*tail = NULL;
        for(auto X: ans2){
            ListNode*n = new ListNode(X);
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