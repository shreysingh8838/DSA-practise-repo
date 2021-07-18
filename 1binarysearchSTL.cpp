#include <bits/stdc++.h>
using namespace std;

// binary search is only applicable to a function which is monotonic function
//monotonic functions -> which maintain a given order

int main()
{
    int n = 5;
    int a[n] = {3, 8, 6, 4, 12};

    vector<int> v = {3, 8, 6, 4, 12};

    sort(v.begin(), v.end()); // 3 4 6 8 12
    sort(a, a + n);           // 3 4 6 8 12

    // Binary search --> log base2(n)
    cout << binary_search(v.begin(), v.end(), 5) << "\n";
    cout << binary_search(a, a + n, 6) << "\n\n";

    // Lower bound function -- gives the exact position of the element in the array but if the element does not present
    // in the array then it will give the position of the immidiate greater element from the array
    cout << lower_bound(v.begin(), v.end(), 8) - v.begin() << "\n";
    cout << lower_bound(a, a + n, 5) - a << "\n\n";

    // upperbound function -- gives the position of immidiate greater element than provided
    cout << upper_bound(v.begin(), v.end(), 4) - v.begin() << "\n";
    cout << upper_bound(a, a + n, 8) - a << "\n\n";

    return 0;
}