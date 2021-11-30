#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;


char arr1[1001], arr2[1001];
// 캐싱 arr
int cache[1001][1001];

int LCS(int idx, int flag)
{
	int& prevsum = cache[idx][flag];
	if (prevsum > -1)	return prevsum;
	
	if (arr2[flag] == '\0' || arr1[idx] == '\0')	return 0;
  
  // 초기화
	prevsum = 0;
	// 파라미터로 받은 값들이 각각 arr1[idx],arr2[flag]의 값이 같다면 idx  와 flag 를 1씩 증가시키며 prevsum +1
	if (arr1[idx] == arr2[flag]) 
	{
		//cout << arr1[idx] << arr2[flag] << " ";
		return  prevsum = LCS(idx + 1, flag + 1) + 1;

	}	

	// 파라미터로 받은 값들이 각각 arr1[idx],arr2[flag]와 다르다면 arr2의 인덱스(flag)를 1증가 시키고 LCS 함수 호출
	prevsum = LCS(idx, flag + 1) + 0;

	// 파라미터로 받은 값들이 각각 arr1[idx],arr2[flag]와 다르다면 arr1의 인덱스(idx)를 1증가 시키고 LCS 함수 호출
	prevsum = max(prevsum,LCS(idx + 1, flag) + 0);
		
	return prevsum;
}




int main()
{
	cin >> arr1 >> arr2;
  // 캐싱 arr -1 로 초기화
	memset(cache, -1, sizeof(cache));

	cout << LCS(0, 0);

	return 0;
}
