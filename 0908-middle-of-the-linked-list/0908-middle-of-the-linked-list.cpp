// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         if(head == NULL||head->next==NULL){
//             return head;
//         }
//         ListNode*fast = head;
//         ListNode*slow = head;
//         while(fast!=NULL&&fast->next!=NULL){
//             fast = fast->next->next;
//             slow = slow->next;
//         }
//         return slow;
//     }
// };


class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        vector<int>ans;
        while(head!=NULL){
            ans.push_back(head->val);
            head=head->next;
        }

        int mid = ans.size()/2;
        vector<int>temp(ans.begin()+mid,ans.end());

        ListNode*head1= NULL;
        ListNode*tail = NULL;
        for(auto x:temp){
            ListNode*n = new ListNode(x);
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