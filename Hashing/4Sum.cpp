#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

// ALGO
// apply the base condition as if the given vector is smaller than 4 then return empty vector<vector<int>> 
// sort the given vector
// start the for loop for first number as i till (n-3)th index and also bound the condition for non duplicates to enter (by checking if the next element should be greater than previous element; since the array is sorted)
// now run the second for loop as j till (n-2)th index and also bound the condition for duplicates and let the first value to enter the conditiona
// Now, make two pointers as left(next index to j) and right(at last of vector) using the while loop till left is smaller than right
// 1)if the sum of all the 4pointers is equal to the target number than pushback all the four numbers to our resultant vector;
//     also at same stage make a while to ignore the duplicates in the next upcoming elements till then increase the left pointer (left++)
//     similar with right
//     now if both the pointers do not point to the next duplicates we will increment then (left++ and right--)
// 2)else if the sum of all 4numbers are greater than targert then to reduce the sum we will decrement the right pointer to get the smaller right number
// 3)else the sum of all 4numbers are smaller than targert then to increase the sum we will increment the left pointer to get the greater left number
// at last return the resultant vector
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>> v;
        if(n<4){                                   //Base Condition
            return v;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++){
            if(i==0 || nums[i]>nums[i-1]){                //if repetitions then we avoid 
                for(int j=i+1;j<n-2;j++){
                    if(j==i+1 || nums[j]>nums[j-1]){         //same for j but atleast once it has to execute
                        int left=j+1, right=n-1;
                        while(left<right){                                   //Remaining 3SUM extension
                            int sum=nums[i]+nums[j]+nums[left]+nums[right];
                            if(sum==target){
                                v.push_back({nums[i],nums[j],nums[left],nums[right]});
                                while(left<l && nums[left]==nums[left+1]){
                                    left++;
                                }
                                while(left<right && nums[right]==nums[right-1]){
                                    right--;
                                }
                                left++,right--;
                            }else if(sum>target){
                                right--;
                            }else{
                                left++;
                            }
                        }
                    }
                }
            }
        }
        return v;
    }
};
int main()
{
    fast;
    Solution s;
    vector<int> nums = {1,0,-1,0,-2,2};
    vector<vector<int>> res = s.fourSum(nums,0);
    for(auto it : res){
        for(auto t : it){
            cout << t << " ";
        }
        cout << endl;
    }
    return 0;
}