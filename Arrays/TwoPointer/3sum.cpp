#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

//Could also be done using hashing but its time complexity is (n^2)log(n) AND space complexity o(N)
//but best approach is of two pointer its time complexity is (n^2)

// algo
// sort the given array
// traverse for the array for the first element to be static
// now do its -ve
// now define two pointers as high and low
// and start the traversing again as in binary search (ie nums[high]+nums[low] == -nums[i])
// and similarily in binary search we can further move our low or high pointer either its greater or smaller
// if it gets equal than pushback all the three numbers in the resultant vector and increase both the pointer for once
// do the same low and high traversing for all the nums[i]
// also this i pointer will move from 0 to n-2 only
// and low will always start from i+1 and high from n-1

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> res;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 2; i++)
        {
            if (i == 0 || (i > 0 && nums[i] != nums[i - 1]))
            {
                int low = i + 1, high = n - 1, target = 0 - nums[i];
                while (low < high)
                {
                    if (nums[low] + nums[high] == target)
                    {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        res.push_back(temp);
                        while (low < high && nums[low] == nums[low + 1])
                            low++;
                        while (low < high && nums[high] == nums[high - 1])
                            high--;
                        low++;
                        high--;
                    }
                    else if (nums[low] + nums[high] > target)
                        high--;
                    else
                        low++;
                }
            }
        }
        return res;
    }
};

int main()
{
    fast;
    return 0;
}