#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;
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

class Solution
{
    int ListSize(ListNode *head)
    {
        if (head == NULL)
            return NULL;
        int counter = 0;

        // to get the size of the list
        ListNode *temp = head;
        while (temp != NULL)
        {
            temp = temp->next;
            counter++;
        }
        return counter;
    }

public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        if (head == NULL)
            return NULL;

        // index to be deleted from the start
        int position = ListSize(head) - n;

        // creating a temproray copy of head of the list
        ListNode *temp = head;
        // if n the is the last node
        if (position == 0)
        {
            // storing next Node as head
            head = head->next;
            // deleting the front element
            delete (temp);
            return head;
        }
        else
        {

            // traverse to the required position
            while (--position)
            {
                temp = temp->next;
            }

            // storing the required to the current
            ListNode *curr = temp->next;
            //updating new address relation
            temp->next = curr->next;
            // free the current required Node
            delete (curr);
            return head;
        }
    }
};

int main()
{
    fast;

    return 0;
}