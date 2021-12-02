#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int n;
int arr[301];
int cache[301][3];

int climb(int idx, int cnt)
{

	if (idx == n)	return arr[idx];
	if (idx >  n)	return -3000001;

	int& prevsum = cache[idx][cnt];
	if (prevsum > -1)	return prevsum;
	//2칸밟음

	prevsum = climb(idx + 2, 1)+arr[idx];
	if(cnt < 2)
	{
	//1칸밟음
	prevsum = max(prevsum,climb(idx + 1, cnt+1)+arr[idx]);
	}

	return prevsum;
}


int main()
{
	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	memset(cache, -1, sizeof(cache));
	cout << climb(0, 0);
	return 0;
}
