#include <iostream>
#include <string.h>

using namespace std;
int n;
int cache[12];
int arr[12];

int main()
{
	//입력
	cin >> n;
	for (int j = 0; j < n; j++)
	{
		cin >> arr[j];
	}
	// 캐싱
	cache[0] = 0;
	cache[1] = 1;
	cache[2] = 2;
	cache[3] = 4;

	for (int i = 4; i <= 11; i++)
	{
		cache[i] = cache[i - 1] + cache[i - 2] + cache[i - 3];
	}
	// 출력
	for (int k = 0; k < n; k++)
	{
		cout << cache[arr[k]] << "\n";
	}

	return 0;
}
