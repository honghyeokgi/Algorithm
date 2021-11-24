#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
int arr[8];
int ck[8];
int answer[8];

int nM(int dn, int dm)
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
		int last = -1;
		for (int j = 0; j < n; j++)
		{
			if (ck[j] != 1 && arr[j] != last)
			{
				
				ck[j] = 1;
				answer[m - dm] = arr[j];
				last = arr[j];
				nM(dn, dm - 1);
				ck[j] = 0;
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
	nM(n, m);

	return 0;
}
