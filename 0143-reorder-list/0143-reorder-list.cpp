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
    void reorderList(ListNode* head) {
        ListNode*temp=head;
        vector<int>ans;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp = temp->next;
        }

        vector<int>ans2;
        int i = 0;
        int j = ans.size()-1;
        while(i<j){
            ans2.push_back(ans[i]);
            ans2.push_back(ans[j]);
            i++;
            j--;
        }
        if(ans.size()%2==1)ans2.push_back(ans[i]);

        ListNode*head1 = NULL;
        ListNode*tail = NULL;

        for(auto X : ans2){
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
        while(head1!=NULL){
            head->val = head1->val;
            head = head ->next;
            head1 = head1->next;
        }
    }
};