#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int n;
int cache[100001];

int makeOne(int dn)
{

	int& prevsum = cache[dn];
	if (prevsum > -1)	return prevsum;
	
	if (dn == 1)	return 0;

	prevsum = 10000001;

	prevsum = makeOne(dn - 1) + 1;

	if (dn % 3 == 0)	prevsum = min(prevsum,makeOne(dn / 3) + 1);
	if (dn % 2 == 0)	prevsum = min(prevsum, makeOne(dn / 2) + 1);

	return prevsum;

}

int main()
{

	cin >> n;
	memset(cache, -1, sizeof(cache));
	cout << makeOne(n);

	return 0;
}
