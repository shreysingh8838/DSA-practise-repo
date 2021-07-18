#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod = 1000000007;

// Ques link - https://www.youtube.com/watch?v=IHfZaRZFg7s&t=105s
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

// Both the functions work on Recursion based IBH - INDUCTION BASE HYPOTHESIS
// RECURSSION Approach VIDEO LINKS - https://www.youtube.com/watch?v=Xu5RqPdABRE&list=PL_z_8CaSLPWeT1ffjiImo0sYTcnLzo-wY&index=3 AND https://www.youtube.com/watch?v=aqLTbtWh40E&list=PL_z_8CaSLPWeT1ffjiImo0sYTcnLzo-wY&index=5

// MY explanation is when we pass the root node to the function it will simultaneously call both the node left and right
// And both left and right node will intutively act as root node and again call the function and then again their further childs will be called
// Now the induction will work till base condition will arrive means when the leaf node's child will become root (Also we know that we have defined the child nodes of any leaf node as NULL)
// So when the root node is equal to NULL then it will return 0 and similarily at right side of the tree
// At leaf node both the recursive function will return 0 and both the zero we be added with 1 ,and their whole sum will be return to their parent and will get added
int Count_all_nodes(Node *root)
{
    if (root == NULL)
        return 0;
    return Count_all_nodes(root->left) + Count_all_nodes(root->right) + 1;
}

// Similarily here we are adding the root data of every leaf node from both left side and right side at same time
// when they both found as 0 they will be only added to the leaf node data, and the same is return to their parent
// Till we will come back to our main root node
int Sum_all_nodes(Node *root)
{
    if (root == NULL)
        return 0;
    return Sum_all_nodes(root->left) + Sum_all_nodes(root->right) + root->data;
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
    cout << Count_all_nodes(root) << endl;
    cout << Sum_all_nodes(root) << endl;

    return 0;
}