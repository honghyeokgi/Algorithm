#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int arr[10001];
int m;

int cache[10001][3];

// idx는 입력받은 포도주 배열의 인덱스 를 eatgrape가 먹었는지 안먹었는지 판별한다. 먹었을경우 총합에 해당 어레이의 인덱스의 값을 더해준다.
// cnt 는 지금까지 먹은 개수
int eatgrape(int idx, int cnt)
{
	int& prevsum = cache[idx][cnt];

	if (prevsum > -1)	return prevsum;
	if (idx == m)	return 0;

	// 안먹는 경우
	prevsum = eatgrape(idx + 1, 0);

	// 먹는경우
	if (cnt == 0 || cnt == 1)
	{
		prevsum = max(prevsum, eatgrape(idx + 1, cnt + 1) + arr[idx]);
	}

	return prevsum;
}

int main()
{
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> arr[i];
	}

	memset(cache, -1, sizeof(cache));

	cout << eatgrape(0,0);

	return 0;
}
