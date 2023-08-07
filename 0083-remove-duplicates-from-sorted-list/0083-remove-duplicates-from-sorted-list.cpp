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
//     ListNode* deleteDuplicates(ListNode* head) {
//         if(head == NULL){
//             return NULL;
//         }
//         ListNode*curr = head;
//         while(curr!=NULL){
//             if((curr->next!=NULL)&&curr->val==curr->next->val){
//                 ListNode*dimpy = curr->next->next;
//                 ListNode*nodetodelete = curr->next;
//                 delete(nodetodelete);
//                 curr->next=dimpy;
//             }
//             else{
//                 curr=curr->next;
//             }
//         }
//         return head;
//     }
// };

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        set<int> ans;
        while(head!=NULL){
            ans.insert(head->val);
            head=head->next;
        }
        ListNode* head1=NULL;
        ListNode* tail=NULL;
        for(auto x: ans){
            ListNode* n=new ListNode(x);
            if(head1==NULL){
                head1=n;
                tail=n;
            }else{
                tail->next=n;
                tail=n;
            }
        }
        return head1;
        
    }
};