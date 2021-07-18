#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool prime(ll n)
{
	if (n <= 1)
		return 0;
	if (n <= 3)
		return 1;
	if (n % 2 == 0 or n % 3 == 0)
		return 0;
	for (ll i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 or n % (i + 2) == 0)
			return 0;
	}
	return 1;
}
int main()
{
	ll i, j, k, t, n;
	t = 1;
	while (t--)
	{
		n = 4;
		for (i = n; j = n; i--, j++)
		{
			if (i >= 0 and prime(i) == 1)
			{
				cout << i << "\n";
				break;
			}
			else if (prime(j) == 1)
			{
				cout << j << "\n";
				break;
			}
		}
	}
}