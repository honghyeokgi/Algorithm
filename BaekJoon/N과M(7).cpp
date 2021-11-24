#include <iostream>
#include < algorithm>
using namespace std;

int n, m;
int answer[100];
int ck[8];
int arr[8];


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
		for (int j = 0; j < n; j++)
		{	

			answer[m - dm] = arr[j];
			nM(dn, dm - 1);
		}
	}
	return 0;
}


void bSort(int* arr)
{
	int now = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i] < arr[j])
			{
				now = arr[i];
				arr[i] = arr[j];
				arr[j] = now;
			}
		}
	}
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
