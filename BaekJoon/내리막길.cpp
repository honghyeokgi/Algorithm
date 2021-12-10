#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int board[501][501];
int dp[501][501];

int dx[] ={ 0, 0, 1, -1 };
int dy[] ={ 1,-1,0,0 };

int n, m;


int getPath(int nx, int ny)
{

	// 함수가 목적지에 도달했을경우 retrun 1
	if (nx == n - 1 && ny == m - 1)	return 1;
	// -1 은 탐색하지 않은곳이므로 -1이 아니라면 해당 dp 리턴
	if (dp[nx][ny] != -1) return dp[nx][ny];

	// 해당 구역을 탐지 했지만 조건에 걸려 탐색 못한 경우 대비 0
	dp[nx][ny] = 0;
	for (int i = 0; i < 4; i++)
	{
		int x = nx + dx[i];
		int y = ny + dy[i];
		// x,y가 board 범위를 벗어나지 않으면
		if (x >= 0 && y >= 0 && x < n && y < m)
		{
			// 보드xy 가 보드 nx ny 보다 작다면 이동 및 dp에 저장
			if (board[x][y] < board[nx][ny])
			{
				dp[nx][ny] = dp[nx][ny] + getPath(x, y);
			}
		}
	}

	return dp[nx][ny];
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> board[i][j];
		}
	}
	memset(dp, -1, sizeof(dp));
	cout << getPath(0, 0);

	return 0;

}
