class Solution {
public:
    ListNode* mergeTwoLists(ListNode* L1, ListNode* L2) {
        if (L1== nullptr) {return L2;}
        if (L2== nullptr) {return L1;}
        if (L1->val <= L2->val) {
            L1->next= mergeTwoLists(L1->next, L2);
            return L1;
        }
        else {
            L2->next= mergeTwoLists(L1, L2->next);
            return L2;
        }
    }
};
