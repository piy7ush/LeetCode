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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>ans;
        while(list1!=NULL){
            ans.push_back(list1->val);
            list1 = list1->next;
        }
        while(list2!=NULL){
            ans.push_back(list2->val);
            list2 = list2->next;
        }

        sort(ans.begin(),ans.end());

        ListNode*head = NULL;
        ListNode*tail = NULL;

        for(auto xxx: ans){
            ListNode*n = new ListNode (xxx);
            if(head == NULL){
                head = n;
                tail = n;
            }
            else{
                tail->next = n;
                tail = n;
            }
        }
        return head;
    }
};