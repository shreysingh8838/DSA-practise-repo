// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */

// algo  given in code
// tc-O(N)

// class Solution {
// public:
//     ListNode* removeElements(ListNode* head, int val) {
//         // to check if the given list is null and if so then return NULL to it
//         if(head==NULL) return NULL;
        
//         // to check if the node val to be delete are lying in the head of the node only then we will skip the nodes and moves the head astep aside untill the head's val is different from the given val
//         while(head!=NULL && head->val==val) {
//             head = head->next;
//         }
        
//         // create a current node to store the head value temporarily
//         ListNode* c = head;
//         // now the condition for the loop will be untill the next node of the curr is not null
//         while(c!=NULL && c->next!=NULL){
            
//             //if the current node's next's val is same as the given val then we will swap the connection of curr node's to curr's next's next
//             if(c->next->val == val){
//                 c->next = c->next->next;
//             }
//             // and if the current node's next's val is not same as the given val then the curr node traverse as normal to its next
//             else{
//                 c = c->next;
//             }
//         }
        
//         // atlast return the actuall head of list as the changes in the list has been done already
//         return head;
//     }
// };