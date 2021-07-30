#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;
// class Node{
//     int data;
//     Node* left;
//     Node* right;
//     Node* next;
//     Node(int x){
//         this.data = x;
//         this.left = NULL;
//         this.right = NULL;
//         this.next = NULL;
//     }
// };

// ALGOs
// create temporary Node to store the previous Node (prev)
// Move to the extreme left first
// check this is false only for 1st loop as the root (is just befoe the extreme left) and its address is given to previous Node (prev node's next pointer)
// as the root is moving its previous node is also updating at the same time
// start moving to the right
class Solution
{
    void solve(Node *root, Node *&prev)
    {
        if (root == NULL)
            return;
        solve(root->left, prev); // Move to the extreme left first
        if (prev != NULL)
            prev->next = root; // check this is false only for 1st loop as the root (is just befoe the extreme left) and its address is given to previous Node (prev node's next pointer)
        prev = root;           // as the root is moving its previous node is also updating at the same time
        solve(root->right, prev);
    }

public:
    void populateNext(Node *root)
    {
        Node *prev = NULL; // create temporary Node to store the previous Node
        solve(root, prev);
    }
};
int main()
{
    fast;

    return 0;
}