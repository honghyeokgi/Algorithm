#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int m;
int arr[1001][3], cache[1001][4][3];

int makeRGB(int house, int prevN, int firstN)
{

	int& prevsum = cache[house][prevN + 1][firstN];
	
	if (prevsum > -1)	return prevsum;

	if (house == m)
	{
		if (firstN == prevN)	return prevsum = 2000002;
		return 0;
	}

	prevsum = 1000001;
	for (int i = 0; i < 3; i++)
	{
		//같을경우
		if (prevN == i)	continue;
		
		//다를경우
		prevsum = min(prevsum, makeRGB(house + 1, i,firstN) + arr[house][i]);
		if (house == 0) firstN++;
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
	
	cout << makeRGB(0, -1, 0);
	return 0;
}
