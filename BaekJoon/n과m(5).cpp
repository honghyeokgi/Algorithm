#include <iostream>

using namespace std;

int n,m;
int ck[9];
int answer[1000];
int arr[8];

int nM(int dn,int dm)
{
	if (dm == 0)
	{
		for (int i = 0; i < m; i++)
		{
			cout << answer[i] << " ";
		}
		cout << '\n';
	}
	else
	{
		for (int j = 0; j < n; j++)
		{
			if (ck[j] != 1)
			{
				ck[j] = 1;
				answer[m - dm] = arr[j];
				nM(dn, dm - 1);
				ck[j] = 0;
			}
		}
	}
	return 0;

}

void bSort(int* array) 
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

	bSort(arr);
	nM(n, m);



	return 0;
}
