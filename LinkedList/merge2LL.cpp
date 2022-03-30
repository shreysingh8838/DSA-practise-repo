#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

//   Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *a, ListNode *b)
    {   
        if(a == NULL) return b;
        if(b == NULL) return a;
        ListNode* res = NULL;
        if(a->val < b->val){
            res = a;
            res->next = mergeTwoLists(a->next, b);
        }
        else{
            res = b;
            res->next = mergeTwoLists(a, b->next);
        }
        return res;
    }
};
int main()
{
    fast;

    return 0;
}