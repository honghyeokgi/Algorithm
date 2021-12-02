#include <iostream>
#include <string.h>

using namespace std;
int dn;
long long cache[1000001];

int main()
{
	cin >> dn;
	memset(cache, 0, sizeof(cache));

	cache[1] = 1;
	cache[2] = 2;
	

	for (int i = 3; i <= dn; i++)
	{
		cache[i] = (cache[i-1] + cache[i-2]) % 15746;
	}

	cout << cache[dn];

	return 0;
}
