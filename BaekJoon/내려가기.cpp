#include <iostream>
#include <algorithm>

using namespace std;

int arr[100001][3];
int minDP[2][3], maxDP[2][3];
int n;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
		}
	}

	maxDP[0][0] = minDP[0][0] = arr[0][0];
	maxDP[0][1] = minDP[0][1] = arr[0][1];
	maxDP[0][2] = minDP[0][2] = arr[0][2];


	for (int i = 1; i <= n; i++)
	{
		maxDP[1][0] = arr[i][0] + max(maxDP[0][0], maxDP[0][1]);
		maxDP[1][1] = arr[i][1] + max(maxDP[0][0], max(maxDP[0][1], maxDP[0][2]));
		maxDP[1][2] = arr[i][2] + max(maxDP[0][1], maxDP[0][2]);

		maxDP[0][0] = maxDP[1][0];
		maxDP[0][1] = maxDP[1][1];
		maxDP[0][2] = maxDP[1][2];

		minDP[1][0] = arr[i][0] + min(minDP[0][0], minDP[0][1]);
		minDP[1][1] = arr[i][1] + min(minDP[0][0], min(minDP[0][1], minDP[0][2]));
		minDP[1][2] = arr[i][2] + min(minDP[0][1], minDP[0][2]);

		minDP[0][0] = minDP[1][0];
		minDP[0][1] = minDP[1][1];
		minDP[0][2] = minDP[1][2];
	}
	int maxNm = max(maxDP[0][0], max(maxDP[0][1], maxDP[0][2]));
	int minNm = min(minDP[0][0], min(maxDP[0][1], minDP[0][2]));

	cout << maxNm << " " << minNm;

	return 0;
}
