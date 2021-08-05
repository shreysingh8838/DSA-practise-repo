#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

struct Item{
    int value;
    int weight;
};
class Solution{
public:
    static bool cmp(Item a, Item b)
    {
        double r1 = (double)a.value / a.weight;
        double r2 = (double)b.value / b.weight;
        return r1 > r2;
    }
    
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        
        //sorting items on basis of value/weight ratio.
        sort(arr, arr + n, cmp);
        
        //taking variable for current weight in knapsack.
        int curWeight = 0;
        double finalvalue = 0.0;
        
        //iterating over all the items.
        for (int i = 0; i < n; i++)
        {
            //if currweight + item's weight is less than or equal to W,
            //then we add the item's value to final value.
            if (curWeight + arr[i].weight <= W)
            {
                curWeight += arr[i].weight;
                finalvalue += arr[i].value;
            }
            //else we take the fraction of the that item's value 
            //based on the remaining weight in knapsack.
            else
            {
                int remain = W - curWeight;
                finalvalue += arr[i].value * ((double) remain / arr[i].weight);
                break;
            }
        }
        //returning final value.
        return finalvalue;
    }
};
int main()
{
    fast;

    return 0;
}