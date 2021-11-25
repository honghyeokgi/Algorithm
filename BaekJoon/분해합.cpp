#include <iostream>

using namespace std;

int n;
int prevNm;

int find(int dn)
{
	int findeNm = 0;
	 prevNm = 0;

	findeNm += dn;
	
	while (dn != 0)
	{
		findeNm += dn % 10;
		dn /= 10;
	}
	
	prevNm = findeNm + dn;
	return findeNm + dn;
}

int combination(int num)
{
	for (int i = 0; i < n; i++)
	{
		find(i);
		if (prevNm == n)	return i;
		
	}
		return 0;
}

int main()
{
	cin >> n;
	cout << combination(n);

	return 0;
}
