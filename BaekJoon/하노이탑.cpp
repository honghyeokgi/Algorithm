#include <iostream>

using namespace std;

void hanoi(int a, int start, int to, int pass)
{
	if (a == 1)
	{
		cout << start;
		cout << " ";
		cout << to << 
			endl;
	}
	else
	{
		hanoi(a - 1, start, pass, to); 
		cout << start;
		cout << " ";
		cout << to << '\n';
		hanoi(a - 1, pass, to, start); 

	}

}

int main()
{
	int n;
	cin >> n;
	cout << (1 << n) - 1 << '\n';
	hanoi(n, 1, 3, 2);

}
