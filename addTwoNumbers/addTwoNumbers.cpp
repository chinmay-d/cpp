#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<math.h>
#include<bitset>
#include<numeric>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
   int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
}; 

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *l3 = new ListNode();
        ListNode *headptr = l3;
        int carry = 0, ans = 0;
        while(l1 || l2 || carry){
            ListNode *temp = new ListNode();
            ans = 0;

            // conditions to set ans value and move to next node
            if(l1 && l2){
                ans = l1->val + l2->val + carry;
                l1 = l1->next; l2 = l2->next;
            }
            else if(l1){
                ans = l1->val + carry;
                l1 = l1->next;
            }
            else if(l2){
                ans = l2->val + carry;
                l2 = l2->next;
            } 
            else if(carry){ans=carry;}
            
            if(ans>9) {ans-=10; carry=1;}
            else carry = 0;

            // put val and connect
            temp->val = ans;
            l3->next = temp;
            l3 = l3->next;
        }
        return headptr->next;
    }
};

ListNode makell(int n){
    int v;
    ListNode node = ListNode();
    ListNode *ptr = &node;
    ListNode *head = &node;
    for(int i=0;i<n;i++){
        cout<<"enter val " ;
        cin >> v;
        if(i == 0){
            ptr->val = v;
            continue;
        }
        ListNode *tempptr = new ListNode(v);
        ptr->next = tempptr;
        ptr = ptr->next;
    }
    return *head;
}

void displayll(ListNode *ptr){
    while(ptr != NULL){
        cout<<ptr->val<<endl;
        ptr = ptr->next;
    }
}

int main(){
    Solution sol;

    ListNode l1 = makell(3);
    ListNode l2 = makell(1);
    
    // display ll
    // displayll(&l1);
    // displayll(&l2);    
    
    // solve
    ListNode *res = sol.addTwoNumbers(&l1, &l2);
    
    displayll(res);

    return 0;
}