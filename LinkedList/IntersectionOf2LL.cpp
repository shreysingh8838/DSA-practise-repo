/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */




// algo
// BRUTE FORCE USING HASHMAP
// tc- o(M*N) and sc-o(N) 
// first we will check the base of first linkedlist
// create a unordered set and store the ListNode's of the first linkedlist
// first we will check the base of second linkedlist
// then check from the second linkedlist that any node of it does existed in the set or not
// and if it does exist then it returns that node at the same momemt
// and if it never exist in the second list then after its traversing while loop end, we will return NULL

// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         unordered_set<ListNode*> mp;
//         ListNode* temp = headA;
//         if(headA==NULL) return NULL;
//         while(temp!=NULL){
//             mp.insert(temp);
//             temp = temp->next;
//         }
        
//         temp = headB;
//         if(headB==NULL) return NULL;
//         while(temp!=NULL){
//             if(mp.find(temp)!=mp.end()){
//                 return temp;
//             }
//             temp = temp->next;
//         }
//         return NULL;
//     }
// };