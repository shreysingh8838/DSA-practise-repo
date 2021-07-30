#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;
struct Node{
    int data;
    struct Node* next;
    struct Node* prev;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
void push(Node* head, int val){
    struct Node* temp = new Node(val);
    temp->next = head;
    temp->prev = NULL;
    if(head) head->prev = temp;
    head = temp;
    return;
}
void print(Node* head){
    if(head==NULL) return;
    else{
        cout << head->data << " ";
        print(head->next);
    }
}
int main()
{
    fast;
    struct Node* head = new Node(1);
    push(head,2);
    print(head);
    // print(head);

    return 0;
}
