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
    ListNode* deleteDuplicates(ListNode* head) {
        map<int,int>ans;
        while(head!=NULL){
            ans[head->val]++;
            head = head->next;
        }
        vector<int>anss;
        for(auto X: ans){
            if(X.second==1){
                anss.push_back(X.first);
            }
        }

        ListNode*head1 = NULL;
        ListNode*tail = NULL;
        for(auto XXX: anss){
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