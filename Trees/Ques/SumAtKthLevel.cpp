#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod = 1000000007;

// In this question we have to calculate
// for sum of level at k -> the sum of all nodes which lies at the kth level/ height
// here k is asked from the user

// For sum till K -> means to calculate the sum of all nodes till the k order
// Pre Requisites -> Levelorder / BFS Traversal

// VIDEO LINK - https://www.youtube.com/watch?v=vQIiUWofWw8&t=2s
struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

int Sum_At_K(Node *root, int k)
{
    if (root == NULL)
        return -1; //when we are unable to find any sum

    queue<Node *> q;
    q.push(root);
    q.push(NULL); // After root node when the level order will change we will push NULL
    // HERE WE HAVE TO DEFINE OUR REQUIRED VARIABLES
    int level = 0; // IT WORKS AS COUNT , WE WILL CHECK UNTIL IT REACHES TO K
    int sum = 0;   // IT USED TO STORE THE SUM OF ALL NODE'S DATA WHEN WE WILL REACH TO THE Kth LEVEL
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        if (node) // IF NODE IS not equal to null means it has
        {         // when we found the level equals to k
            if (level == k)
                sum += node->data;
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
        else if (!q.empty())
        {

            // when there is no node left only NULL is present
            // it is a situation when the nodes of a particular level is traversed
            q.push(NULL);
            level++;
        }
    }
    return sum;
}

// ONLY THE CONDITION AT LINE 81 is different from the above program to conclude the sum from 1 to K not ONLY K
int Sum_Till_K(Node *root, int k)
{
    if (root == NULL)
        return -1; //when we are unable to find any sum
    queue<Node *> q;
    q.push(root);
    q.push(NULL); // After root node when the level order will change we will push NULL
    int level = 0;
    int sum = 0;
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        if (node)
        {
            if (level < k)
            { // when we found the level equals to k
                sum = sum + node->data;
            }
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
        else if (!q.empty())
        {
            // when there is no node left only NULL is present
            // it is a situation when the nodes of a particular level is traversed
            q.push(NULL);
            level++;
        }
    }
    return sum;
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    int k = 2;
    cout << Sum_At_K(root, k);
    cout << "\n"
         << Sum_Till_K(root, k);
    return 0;
}