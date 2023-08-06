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
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         if(head == NULL||head->next==NULL){
//             return head;
//         }
//         ListNode*curr = head;
//         ListNode*prev = NULL;
//         ListNode*forward = NULL;
//         while(curr!=NULL){
//             forward = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = forward;
//         }
//         return prev;
//     }
// };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int>ans;
        while(head!=NULL){
            ans.push_back(head->val);
            head = head->next;
        }
        for(auto x:ans) cout<<x<<" ";
        reverse(ans.begin(),ans.end());

        ListNode*head1= NULL;
        ListNode*tail = NULL;
        for(auto xxx:ans){
            ListNode*n = new ListNode(xxx);
            if(head1==NULL){
                head1= n;
                tail =n;
            }
            else{
                tail->next = n;
                tail = n;
            }
        }
        return head1;


    }
};