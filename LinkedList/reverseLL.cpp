#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

//  Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// algo
// create Null node named prev (as its always going to be the previous to the head pointer)
// start the loop till head is not equal to null
// now
    // create a node named next (as its always going to be the next to the head pointer)
    // now exchange the connection of head from next to the prev pointer
    // and now assign prev pointer as head pointer
    // and assign head as the "next" pointer (created above)
// now at every another loop call again next will be assigned to the next node of the head and the loop goes untill the head is not equal to the NULL
class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev = NULL;
        while (head != NULL)
        {
            ListNode *next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
};
int main()
{
    fast;

    return 0;
}