#include <stdio.h>

int BSearchRecur(int arr[], int first, int last, int target)
{
	// 반으로 나누고 다시 탐색하는 과정ㅇ ㅣ반복되니 재귀적 함수로 풀 수 있다.
	int mid;
	if (first > last) return -1; // -1의 반환은 탐색의 실패를 의미
	mid = (first + last) / 2; // 탐색대상의 중앙을 찾는다.

	if (arr[mid] == target) return mid; //탐색된 타겟의 인덱스 값 반환
	else if (target < arr[mid]) return BSearchRecur(arr, first, mid - 1, target);
	else return BSearchRecur(arr, mid + 1, last, target);
}

int main(void)
{
	int arr[] = { 1, 3, 5, 7, 9 };
	int idx;

	idx = BSearchRecur(arr, 0, sizeof(arr) / sizeof(int) - 1, 7);

	if (idx == -1) printf("탐색 실패 \n");
	else printf("타겟 저장 인덱스 : %d \n", idx);

	idx = BSearchRecur(arr, 0, sizeof(arr) / sizeof(int) - 1, 4);
	if (idx == -1) printf("탐색 실패 \n");
	else printf("타겟 저장 인덱스 : %d \n", idx);

	return 0;
}