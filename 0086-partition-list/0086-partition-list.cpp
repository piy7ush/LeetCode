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
    ListNode* partition(ListNode* head, int x) {
        vector<int>ans;
        while(head!=NULL){
            ans.push_back(head->val);
            head = head->next;
        }

        vector<int>ans1;
        vector<int>ans2;

        for(int i =0;i<ans.size();i++){
            if(ans[i]<x){
                ans1.push_back(ans[i]);
            }
            else{
                ans2.push_back(ans[i]);
            }
        }
        ans2.insert(ans2.begin(),ans1.begin(),ans1.end());


        ListNode*head1 = NULL;
        ListNode*tail = NULL;
        for(auto XXX: ans2){
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