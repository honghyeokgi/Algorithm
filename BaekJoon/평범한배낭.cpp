#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int n, maxweight;
int arr[101][2];
int cache[101][100001];

int getProduct(int idx, int Remainder)
{
	int& prevsum = cache[idx][Remainder];

	if (prevsum > -1)	return prevsum;
	
	if (idx == n)	return 0;
	if (Remainder - arr[idx][0] <= -1) 
	{
		if (idx != n)	return prevsum = getProduct(idx + 1, Remainder) + 0;
		return 0;
	}

	prevsum = 0;

	//담지 않는경우
	prevsum =  getProduct(idx + 1, Remainder) + 0;
	//담는경우
	prevsum = max(prevsum,getProduct(idx + 1, Remainder - arr[idx][0]) + arr[idx][1]);

	return prevsum;
}

int main()
{
	cin >> n >> maxweight;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> arr[i][j];
		}
	}

	memset(cache, -1, sizeof(cache));
	cout << getProduct(0, maxweight);

	return 0;
}
