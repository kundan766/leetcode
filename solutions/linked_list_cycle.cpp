// problem link: https://leetcode.com/problems/linked-list-cycle

#include <bits/stdc++.h>
#include<unordered_map>
#include <unordered_set>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head== NULL or head->next == NULL){
            return false;
        }
        
        ListNode *temp1= head, *temp2= head;
        while(temp2->next!=NULL && temp2->next->next != NULL){
            cout<<temp1->val<<endl;
            temp1 = temp1->next;
            temp2 = temp2->next->next;
            if (temp1 == temp2){
                return true;
            }
        }
        return false;
    }
};

int main() {
    Solution s;
}