#include <iostream>

using namespace std;

int ck[8];
int arr[10];
int a, b;



int NandM(int n, int m,int last)
{
	if (m == 0)
	{
		for (int i = 0; i < b; i++)
		{
			cout << arr[i] << " ";
		}
		cout << '\n';
	}

	else 
	{
		for (int j = 0; j < a; j++)
		{
			if (last > j + 1) continue;
				arr[b - m] = j + 1;
				NandM(a, m - 1, j +1);
		}
	}
	return 0;
}





int main()
{

	cin >> a >> b;
	if (1 <= b <= a <= 7) 
	{
		NandM(a, b,1);
	}
	
	return 0;
}
