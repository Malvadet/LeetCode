#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
    public:
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            ListNode* dummyhead = new ListNode();
            ListNode* resultList = dummyhead;
    
            while(list1 != nullptr || list2 != nullptr) {
                if(list1 == nullptr && list2 != nullptr) {
                    resultList->next = list2;
                    return dummyhead->next;
                }
                if(list2 == nullptr && list1 != nullptr) {
                    resultList->next = list1;
                    return dummyhead->next;
                }
                if(list1->val <= list2->val) {
                    resultList->next = new ListNode(list1->val);
                    resultList = resultList->next;
                    if (list1 != nullptr) list1=list1->next;
                }
                else {
                    resultList->next = new ListNode(list2->val);
                    resultList = resultList->next;
                    if (list2 != nullptr) list2=list2->next;
                }
            }
    
            return dummyhead->next;
        }
    };

int main(){
    return 0;
}