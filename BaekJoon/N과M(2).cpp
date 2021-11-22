#include <iostream>

using namespace std;

int arr[8];
int n, m;
int answer[1000];

int line(int a, int select , int last)
{

	if (select == 0) 
	{
		for (int j = 0; j < m; j++)
		{
			cout << answer[j] << " ";
		}
		cout << '\n';
	}

	else
	{
		for (int i = 0; i < a; i++)
		{
			if (arr[i] != 1)
			{
				if (i < last)	continue;
				arr[i] = 1;
				answer[m-select] = i+1;
				line(a, select - 1,i);
				arr[i] = 0;
			}
		}
	}
	return 0;
}

int main()
{
	cin >> n >> m ;
	if (1 <= m <= n <= 8)
	{
		line(n, m, 0);
		return 0;;
	}
	
	
}
