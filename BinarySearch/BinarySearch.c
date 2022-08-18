#include <stdio.h>

int BSearch(int arr[], int len, int target) {
	int first = 0; // 탐색 대상의 시작 인덱스 값
	int last = len - 1; // 탐색 대상의 마지막 인덱스 값
	int mid;

	while (first <= last)
	{
		mid = (first + last) / 2; // 탐색 대상의 중앙을 찾는다.

		if (target == arr[mid]) // 중앙에 저장된 것이 타겟이라면
		{
			return mid; // 탐색 완료 !
		}

		else // 타겟이 아니라면 탐색 대상을 반으로 줄인다.
		{
			if (target < arr[mid]) last = mid - 1;
			else first = mid + 1; 
		}
	}
	return -1; // 찾지 못했을 때 반환되는 값 -1
}

int main(void)
{
	int arr[] = { 1, 3, 5, 7, 9 };
	int idx;

	idx = BSearch(arr, sizeof(arr) / sizeof(int), 7);
	
	if (idx == -1) printf("탐색 실패 \n");
	else printf("타겟 저장 인덱스 : %d \n", idx);

	idx = BSearch(arr, sizeof(arr) / sizeof(int), 4);

	if (idx == -1) printf("탐색 실패 \n");
	else printf("타겟 저장 인덱스 : %d \n", idx);

	return 0;
}