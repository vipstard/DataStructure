#include <stdio.h>

int BSearchRecur(int arr[], int first, int last, int target)
{
	// ������ ������ �ٽ� Ž���ϴ� ������ �ӹݺ��Ǵ� ����� �Լ��� Ǯ �� �ִ�.
	int mid;
	if (first > last) return -1; // -1�� ��ȯ�� Ž���� ���и� �ǹ�
	mid = (first + last) / 2; // Ž������� �߾��� ã�´�.

	if (arr[mid] == target) return mid; //Ž���� Ÿ���� �ε��� �� ��ȯ
	else if (target < arr[mid]) return BSearchRecur(arr, first, mid - 1, target);
	else return BSearchRecur(arr, mid + 1, last, target);
}

int main(void)
{
	int arr[] = { 1, 3, 5, 7, 9 };
	int idx;

	idx = BSearchRecur(arr, 0, sizeof(arr) / sizeof(int) - 1, 7);

	if (idx == -1) printf("Ž�� ���� \n");
	else printf("Ÿ�� ���� �ε��� : %d \n", idx);

	idx = BSearchRecur(arr, 0, sizeof(arr) / sizeof(int) - 1, 4);
	if (idx == -1) printf("Ž�� ���� \n");
	else printf("Ÿ�� ���� �ε��� : %d \n", idx);

	return 0;
}