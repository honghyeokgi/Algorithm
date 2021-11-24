#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
int arr[8], answer[8];

int nM(int dn, int dm, int last)
{
	if (dm == 0)
	{
		for (int i = 0; i < m; i++)
		{
			cout << answer[i] << " ";
		}
		cout << "\n";
	}
	else
	{
		int prev = -1;
		for (int j = 0; j < n; j++)
		{
			if (prev != arr[j] && last <= arr[j])
			{
				answer[m - dm] = arr[j];
				prev = arr[j];
				nM(dn, dm - 1, arr[j]);
			}
		}
	}
	return 0;
}


int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n);
	nM(n, m, 0);
	return 0;
}
