#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int n;
int cache[1001], arr[1001];

int LIS(int idx)
{
	int& prevsum = cache[idx];
	if (prevsum > 0)	return prevsum;

	for (int i = idx; i < n; i++)
	{
		if (arr[i] > arr[idx])	prevsum = max(prevsum, LIS(i)+1);
	}

	return prevsum;
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	memset(cache, 0, sizeof(cache));
	int ret = 0;
	for (int i = 0; i < n; i++)
	{
		ret = max(ret, LIS(i) + 1);
	}
	cout << ret;

	return 0;
}
