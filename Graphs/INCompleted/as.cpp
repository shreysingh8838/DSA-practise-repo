#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod = 1000000007;

int main(){
    stack <int> input, output;
    if(input.empty() && output.empty())
    cout << "yes";
    
}
/*
map<int,int> mp;
int main(){
    mp.insert({3,4});
    mp.insert(pair<int,int>(5,9));
        // prints the elements
    cout << "KEY\tELEMENT\n";
    for(auto it : mp){
        cout << it.first << "   \t" << it.second << "\n";
    }

    if(mp.find(1)==mp.end()) cout << "yes";

}
*/
/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    //Constructor
    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

vector<int> v;
void insert(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    v.push_back(root->data);
    insert(root->left);
    insert(root->right);
}
bool contains(vector<int> v, int child, int parent)
{
    sort(v.begin(), v.end());
    for (int i = child + 1; i < parent - 1; i++)
    {
        if (!binary_search(v.begin(), v.end(), i))
        {
            return true;
        }
    }
    return false;
}

bool isDeadlock(Node *root)
{
    if (root == NULL)
        return false;
    if (root->left->left == NULL && root->left->right == NULL && root->right->left == NULL && root->right->right == NULL)
    {
        if (root->left == NULL)
            if (contains(v, root->left->data, root->data))
                return true;
            else if (root->right == NULL)
                if (contains(v, root->right->data, root->data))
                    return true;
    }
}

int main()
{
    struct Node *root = new Node(8);
    root->left = new Node(5);
    root->right = new Node(9);
    root->left->left = new Node(2);
    root->left->right = new Node(7);
    root->left->left->left = new Node(1);
    insert(root);
    if (isDeadlock(root))
        cout << "Yes";
    else
        cout << "NO";
    return 0;
}*/