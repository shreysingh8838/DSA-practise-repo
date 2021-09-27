#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

// Definition for singly-linked list.
// class ListNode
// {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

// OPTIMAL SOLUTION
// TC - o(N/2) using fast and slow pointer
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* slow = head;
//         ListNode* fast = head;
//         while(fast!= NULL && fast->next!=NULL){
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         return slow;
//     }
// };

// naive solution
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         int size = 0;
//         ListNode* temp = head;
//         while(temp!=NULL){
//             temp = temp->next;
//             size++;
//         }
//         int mid = 0;
//         if(size %2 !=0){
//             mid = size+1;
//             mid /= 2;
//         }
//         else{
//             mid = size/2;
//             mid++;
//         }
//         cout << mid;
//         temp = head;
//         while(temp!=NULL){
//             mid--;
//             if(mid==0) break;
//             temp = temp->next;

//         }
//         return temp;
//     }
// };
int main()
{
    fast;

    return 0;
}