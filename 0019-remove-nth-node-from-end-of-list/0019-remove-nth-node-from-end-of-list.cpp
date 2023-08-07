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
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         if(head == NULL){
//             return head;
//         }
//         ListNode*dummy = new ListNode(0);
//         dummy->next=head;

//         ListNode*fast = dummy;
//         ListNode*slow=dummy;

//         for(int i = 0;i<n;i++){
//             fast=fast->next;
//         }
//         while(fast->next!=NULL){
//             slow=slow->next;
//             fast=fast->next;

//         }
//         slow->next=slow->next->next;
//         return dummy->next;
//     }
// };

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<int>ans;
        vector<int>ans2;
        while(head!=NULL){
            ans.push_back(head->val);
            head = head->next;
        }

        // for(int i =0;i<ans.size();i++){

        //     if(ans[ans.size()-n])continue;
        //     else{
        //         ans2.push_back(ans[i]);
        //     }
        // }
        ans.erase(ans.begin()+ans.size()-n);
        

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