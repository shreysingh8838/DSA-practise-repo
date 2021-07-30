#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;
// (Using Moore’s Voting Algorithm):

// Approach: This is a two-step process.
// The first step gives the element that maybe the majority element in the array. If there is a majority element in an array, then this step will definitely return majority element, otherwise, it will return candidate for majority element.
// Check if the element obtained from the above step is majority element. This step is necessary as there might be no majority element.

// Algorithm:
// Loop through each element and maintains a count of majority element, and a majority index, maj_index
// If the next element is same then increment the count if the next element is not same then decrement the count.
// if the count reaches 0 then changes the maj_index to the current element and set the count again to 1.
// Now again traverse through the array and find the count of majority element found.
// If the count is greater than half the size of the array, print the element
// Else print that there is no majority element

// Complexity Analysis:
// Time Complexity: O(n).
// As two traversal of the array is needed, so the time complexity is linear.
// Auxiliary Space: O(1).
// As no extra space is required.
class Solution
{
    // Using Moore’s Voting Algorithm
public:
    int majorityElement(vector<int> &nums)
    {
        int element = -1;
        int count = 0;
        for (auto it : nums)
        {
            if (count == 0)
            {
                element = it;
            }
            if (it == element)
                count++;
            else
                count--;
        }
        return element;
    }
};
int main()
{
    fast;

    return 0;
}