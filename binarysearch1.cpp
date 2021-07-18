#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin >> n;
	long long int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	long long int q;
	cin >> q;
	while (q--)
	{
		long long int x;
		cin >> x;
		cout << upper_bound(a, a + n, x) - a << " ";
		long long int sum = 0;
		if (x >= n)
			x = n;
		for (long long int i = 0; i < x; i++)
			sum += a[i];
		cout << sum << "\n";
	}
}