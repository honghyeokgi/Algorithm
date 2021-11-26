#include <iostream>

using namespace std;

int n,answer;
int arr[50][2];

int chkrank(int idx)
{

	int num = 0;
	
	for (int i = 0; i < n; i++)
	{
		if (arr[idx][0] < arr[i][0] && arr[idx][1] < arr[i][1]) num++;
	}
	answer = num;
	if (idx == n)	return 0;
	cout << answer+1 << " ";
	chkrank(idx + 1);

	return 0;
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> arr[i][j];
		}
	}
	chkrank(0);
	return 0 ;
}
