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
    void reverse_val(vector<int> &nums,int start,int end){
        while(start<end){
            int temp= nums[end];
            nums[end]=nums[start];
            nums[start]=temp;
            start++;
            end--;
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int>ans;
        while(head!=NULL){
            ans.push_back(head->val);
            head = head->next;
        }
        int n=ans.size();
        for(int i =0;i<ans.size();i++){
            if(n-i<k)break;
            reverse_val(ans,i,i+k-1);
            i= i+k-1;
        }

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
