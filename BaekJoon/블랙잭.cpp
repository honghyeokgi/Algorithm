#include <iostream>
#include <algorithm>

using namespace std;

int n, maxNum;
int arr[100], ck[100], sum[2], answer[100];
int m = 3;


int blackJack(int dn, int dm, int prev)
{
	if (dm == 0)
	{
		int psum = 0;
		for (int i = 0; i < m; i++)
		{
			psum += answer[i];
		}
		if (psum <= maxNum && psum > sum[0])
		{
			sum[0] = psum;
			return sum[0];
		}
	} 
	else
	{
		for (int j = 0; j < n; j++)
		{
			if (ck[j] != 1)
			{
				ck[j] = 1;
				answer[m - dm] = arr[j];
				blackJack(dn, dm - 1,prev);
				ck[j] = 0;
			}
			
		}
	}	
	return 0;
}



int main()
{
	cin >> n >> maxNum;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	blackJack(n, m , 0);
	cout << sum[0];
	return 0;

}
