#include <iostream>

using namespace std;

int n, m;
int ck[9];
int arr[10];

int nM(int dn, int dm, int last)
{
	if (dm == 0)
	{
		for (int i = 0; i < m; i++)
		{
			cout << arr[i] << " ";
		}
		cout << '\n';
	}
	else
	{

		for (int j = 0; j < n; j++)
		{
			if (last > j )	continue;
			arr[m - dm] = j + 1;
			nM(dn, dm - 1, j);
		}
	}
	return 0;

}


int main()
{
	cin >> n >> m;
	nM(n, m, 0);

	return 0;
}
