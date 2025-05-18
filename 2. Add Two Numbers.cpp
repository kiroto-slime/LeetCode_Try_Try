class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int plus= 0;
        ListNode* normal= new ListNode(0);
        ListNode* add= normal;
        while (l1 != nullptr || l2 != nullptr || plus != 0) {
            int num1= (l1 != nullptr) ? l1->val : 0;
            int num2= (l2 != nullptr) ? l2->val : 0;
            int sum= num1+num2+plus;
            int num3= sum%10;
            plus= sum/10;

            ListNode* NextNode= new ListNode(num3);
            add->next= NextNode;
            add= add->next;

            l1= (l1 != nullptr) ? l1->next : nullptr;
            l2= (l2 != nullptr) ? l2->next : nullptr;
        }
        ListNode* result= normal->next;
        delete normal;
        return result;
    }
};
