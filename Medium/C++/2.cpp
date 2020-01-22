#include <iostream>
#include <cstdlib>
using namespace std;
/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode root(0);
        ListNode* temp = &root;
        int digit = 0;
        while(l1 != NULL || l2 != NULL || digit !=0) {
            cout << digit << endl;
            int value1 = (l1 == NULL) ? 0 : l1->val;
            int value2 = (l2 == NULL) ? 0 : l2->val;
            int sum = value1 + value2 + digit;
            digit = sum / 10;

            ListNode* newNode = new ListNode(sum % 10);
            temp->next = newNode;
            temp = temp->next;
            if(l1 != NULL)
                l1 = l1->next;
            if(l2 != NULL)
                l2 = l2->next;
        }
        return root.next;
    }
};

ListNode* init(int nums[], int lens) {
    struct ListNode* head = (ListNode*)malloc(sizeof(ListNode));
    head->next = NULL;
    head->val = 0;
    struct ListNode* point = head;
    for(int i = 0; i < lens; i ++) {
        struct ListNode* temp = (ListNode*)malloc(sizeof(ListNode));
        temp->val = nums[i];
        temp->next = NULL;
        point->next = temp;
        point = point->next;
    }
    return head->next;
}
int main() {
    Solution s;
    int a[3] = {1, 2, 3};
    int b[3] = {2, 3, 4};
    struct ListNode* l1 = init(a, 3);
    struct ListNode* l2 = init(b, 3);
    struct ListNode* l3 = s.addTwoNumbers(l1,l2);
    cout << l3->val;
}