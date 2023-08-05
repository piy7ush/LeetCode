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
    ListNode* rotateRight(ListNode* head, int k) {
        vector<int>ans;
        while(head!=NULL){
            ans.push_back(head->val);
            head= head->next;
        }

        vector<int>temp(ans.size());
        for(int i =0;i<ans.size();i++){
            temp[(i+k)%ans.size()]=ans[i];
            
        }
        ListNode*head1=NULL;
        ListNode*tail = NULL;
        for(auto xxx : temp){
            ListNode*n = new ListNode(xxx);
            if(head1==NULL){
                head1=n;
                tail =n;

            }
            else{
                tail ->next = n;
                tail = n;
            }
        }
        return head1;
    }
};