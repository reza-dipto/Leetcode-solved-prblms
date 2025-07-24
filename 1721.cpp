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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* temp2=head;
        vector<int>v;
        int ses=0,sess=0;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
            ses++;
        }
        swap(k-1,ses-k,v);
        while(temp2){
            temp2->val=v[sess];
            sess++;
            temp2=temp2->next;
        }
        return head;
    }
    void swap(int x,int y ,vector<int>&v){
        int temp=v[x];
        v[x]=v[y];
        v[y]=temp;
    }
};
