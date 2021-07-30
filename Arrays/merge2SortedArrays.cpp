#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

// brute force approach --> take a 3rd array of size m+n put elements of both the array in the 3rd array and then sort them; and then return the elements to the other arrays respective to their sizes
// above approach-> tc- O(nlogn)+O(n)+O(n)
class Solution
{
public:
    // [1,2,3,0,0,0], m =3
    // [2,5,6], n = 3
    // output - [1,2,2,3,5,6] return from nums1
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        if (nums2.size() == 0)
        {
            for (auto it : nums1)
            {
                cout << it << " ";
            }
            return;
        }
        int i = 0, j = 0;
        while (i < m)
        {
            if (nums1[i] > nums2[j])
            {
                swap(nums1[i], nums2[j]);
                sort(nums2.begin(), nums2.end());
                i++;
            }
            else
            {
                i++;
            }
        }
        for (int l = m, k = 0; l < nums1.size(); l++)
        {
            nums1[l] = nums2[k++];
        }
        for (auto it : nums1)
        {
            cout << it << " ";
        }
    }
};
int main()
{
    fast;
    vector<int> nums1 = {1};
    vector<int> nums2 = {};
    int m = 1, n = 0;
    Solution s1;
    s1.merge(nums1, m, nums2, n);
    return 0;
}
