#include <stdio.h>

void HanoiTowerMove(int num, char from, char by, char to)
{
	if (num == 1) // �̵��� ������ ���� 1�����
	{
		printf("���� 1�� %c���� %c�� �̵� \n", from, to);
	}
	else
	{
		HanoiTowerMove(num - 1, from, to, by);
		printf("���� %d��(��) %c���� %c�� �̵� \n", num, from, to);
		HanoiTowerMove(num - 1, by, from, to);
	}
}

int main(void)
{
	// ���� A�� ���� 3���� ���� B�� �����Ͽ� ���� C�� �ű��
	HanoiTowerMove(3, 'A', 'B', 'C');
	return 0;
}