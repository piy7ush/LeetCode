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
    ListNode* mergeNodes(ListNode* head) {
        vector<int>ans;
        while(head!= NULL){
            ans.push_back(head->val);
            head = head->next;
        }
        
        vector<int>final;

        for(int i =0;i<ans.size()-1;i++){
            if(ans[i]!=0){
                continue;            
            }
            i++;
            int sum =0;
            while(i<ans.size()&&ans[i]!=0){

                sum+= ans[i];
                i++;

            }
            i--;
            final.push_back(sum);
        }


        ListNode*head1 = NULL;
        ListNode*tail = NULL;
        for(auto X: final){
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
        return head1;

    }

};