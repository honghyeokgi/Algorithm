#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;
int arr[1001][3], cache[1001][4];
int m;

int makeRGB(int house, int prevN)
{
	int& prevsum = cache[house][prevN + 1];

	if (prevsum > -1)	return prevsum;
	if (house == m)	return 0;

	prevsum = 1000001;
	for (int i = 0; i < 3; i++)
	{
		//prevN이 현재와  같은경우
		if (prevN == i)	continue;

		//prevN이 현재와 다른경우
		prevsum = min(prevsum, makeRGB(house + 1, i) + arr[house][i]);
	}
	
	return prevsum;
}

int main()
{
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
		}
	}

	memset(cache, -1, sizeof(cache));
	cout << makeRGB(0, -1);

	return 0;
}
