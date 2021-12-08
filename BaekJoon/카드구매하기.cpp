#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[1002], cache[1002];
int main()
{
	cin >> n;

	for (int i = 1; i < n+1; i++)
	{
		cin >> arr[i];
	}

	cache[0] = 0;
	cache[1] = arr[1];

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cache[i] = max(cache[i - j] + arr[j], cache[i]);
		}
	}
	cout << cache[n];

	return 0;

}
