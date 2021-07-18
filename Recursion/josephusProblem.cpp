#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

// PROBLEM STATEMENT
// given is people are standing in circular shape and one has to kill its very next kth person
// so we have to find the person(initial position) who will be left at last
// GIVEN - n = number of total people && k = gap

// ALGO
// create a vector of size n with values (1->n)
// reduce the k value with 1 , because if have to find the next kth person
// intitialise the current index as 0 which will start the killing
// call the recursive function solve with given values vector, k, index and variable to store our final answer
//               // inside the solve function
// base condition if vector will going to be empty and only last element will be left; we will return that element
// to find the next person who is going to be killed - we have a formula for that current index will kill this person ((index + k) % v.size()) and
// then we will erase that ((index + k) % v.size()) element from the vector
// so new index will be next of this ((index + k) % v.size()) / previous killed person
// and then same recursive thing people will kill their next kth person, and at last when only 1 person left alive
// we will return its value

void solve(vector<int> v, int k, int index, int &ans)
{
    if (v.size() == 1)
    {
        ans = v[0];
        return;
    }
    index = (index + k) % v.size();
    v.erase(v.begin() + index);
    solve(v, k, index, ans);
}
int main()
{
    fast;
    int n = 5, k = 2;
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }
    int ans = 0;
    k--;
    int index = 0;
    solve(v, k, index, ans);
    cout << ans << " person will going to be left";
    return 0;
}