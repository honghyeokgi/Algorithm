#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int n;
int arr[100001], cache[100001];

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	cache[0] = arr[0];
	int ret = arr[0];

	for (int j = 1; j < n; j++)
	{
		cache[j] = max(cache[j - 1] + arr[j], arr[j]);
		ret = max(cache[j], ret);
	}
	cout << ret;

	return 0;
}
