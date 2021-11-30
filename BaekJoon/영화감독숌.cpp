#include <iostream>

using namespace std;

int number;
int answer = 0;

int makenum(int n)
{
	int cnt = 0;
	
	while (n != 0)
	{
		if (n % 10 == 6) cnt++;
		else if (n % 10 != 6)	cnt = 0;
		n /= 10;
		if (cnt == 3)	answer++;
	}
	return 0;
}

int trynum()
{	
	for (int i = 666; i < 1000000000; i++)
	{
		makenum(i);	
		if (number == answer)	return i;
	}
	return 0;
}

int main()
{
	cin >> number;
	cout << trynum();
	
	return 0;
}
