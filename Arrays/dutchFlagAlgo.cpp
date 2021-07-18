#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

//sort 0s, 1s, 2s without using extra space ------and this is done by dutch national flag algo
// brute force -->  normal sorting the array --> tc-O(nlogn) sc-O(1)
// counting sort  ---> count number of 0s then 1s and then 2s store it in the same array with there counts itself  ---> tc - O(2N)

//Dutch national flag algo --> use 3 pointers
// initials ->  low and mid at index 0  -> high at the last index
// as (0-(low-1)) are zeros and (high+1 - n) are twos
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int low = 0, mid = 0, high = nums.size() - 1;
        while (mid <= high)
        { // traversing the loop till mid is not greater than high
            if (nums[mid] == 0)
                swap(nums[low++], nums[mid++]); // if the mid pointer gets at zero than swap the number at low pointer and then increment both pointers as low pointer points after all the 0s
            else if (nums[mid] == 1)
                mid++; // if the mid pointer gets at one then moves mid a next index aside
            else if (nums[mid] == 2)
                swap(nums[high--], nums[mid]); // if the mid pointer gets at second then swap the number at high pointer and then decrement the high pointer as it must point before all the 2s
        }
    }
};
int main()
{
    fast;

    return 0;
}