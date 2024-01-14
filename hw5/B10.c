/*
B10
��� ����� � ������� �����������

������ ����� ����� � ����������, ����� ��, ��� ���
��� ����� ����������� � ������� �����������.

������ �� �����:  ����� �����
������ �� ������: YES ��� NO

������ �1
������ �� �����:  1238
������ �� ������: YES

������ �2
������ �� �����:  1274
������ �� ������: NO
*/

#include <stdio.h>

#define BASE	10 // ��������� ������� ���������
//#define DEBUG	1

int main(void)
{
	int num;
	scanf("%d", &num);

	// �������������� ����� ��� �������� �� ������� �������� � �������
	{
		int temp = num;
		num = temp % BASE;
		temp /= BASE;
		for (; temp > 0; num *= BASE, num += temp % BASE, temp /= BASE);
	}

	int flag = 1,          // ���� (1 ���� � ���� �� ������)
		cur,               // ������� �����
		prev = num % BASE; // ���������� ����� (����. ����� ������)

	for (num /= BASE; num > 0; num /= BASE, prev = cur, flag = 1)
	{
		flag = 0;
		cur = num % BASE;
#ifdef DEBUG
		printf(" %d ? %d\n", prev, cur);
#endif
		if (cur < prev)
			break;
	}

	if (flag)
		printf("YES" "\n");
	else
		printf("NO" "\n");

	return 0;
}
