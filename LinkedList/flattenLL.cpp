#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;
// Link list node 
class Node
{
    public:
        int data;
        Node *right, *down;
};
Node* head = NULL;


// Main idea is to use merge two linkedlist
// in this we have a linkedlist like this 
/* Let us create the following linked list
        (a)  (b)  (c)    (d)
        5 -> 10 -> 19 -> 28
        |    |     |     |
        V    V     V     V
        7    20    22    35
        |          |     |
        V          V     V
        8          50    40
        |                |
        V                V
        30               45

        So, first of all we will move to extreme right LL (d) and its just left (c) and then we will merge (c) list with (d) list
        then it will be backtracked to a. And all the sorting and merging of a list is done on the new list named res.
*/

Node* merge(Node* a, Node* b){
    if(a==NULL) return b;
    if(b==NULL) return a;

    Node* res = NULL;
    if(a->data < b->data){
        res = a;
        res->down = merge(a->down, b);
    }
    else{
        res = b;
        res->down = merge(a, b->down);
    }
    res->right = NULL;
    return res;
}

Node* flatten(Node* root){
    if(root == NULL || root->right == NULL) return root;
    root->right = flatten(root->right);
    root = merge(root, root->right);
    return root;
}







// Utility function to insert a node at
// beginning of the linked list
Node* push(Node* head_ref, int data)
{
    
    // Allocate the Node & Put in the data
    Node* new_node = new Node();

    new_node->data = data;
    new_node->right = NULL;

    // Make next of new Node as head
    new_node->down = head_ref;

    // Move the head to point to new Node
    head_ref = new_node;

    return head_ref;
}

void printList()
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->down;
    }
    cout << endl;
}
int main()
{
    fast;
    head = push(head, 30);
    head = push(head, 8);
    head = push(head, 7);
    head = push(head, 5);

    head->right = push(head->right, 20);
    head->right = push(head->right, 10);

    head->right->right = push(head->right->right, 50);
    head->right->right = push(head->right->right, 22);
    head->right->right = push(head->right->right, 19);

    head->right->right->right = push(head->right->right->right, 45);
    head->right->right->right = push(head->right->right->right, 40);
    head->right->right->right = push(head->right->right->right, 35);
    head->right->right->right = push(head->right->right->right, 20);

    // Flatten the list
    head = flatten(head);

    printList();
    return 0;
    return 0;
}