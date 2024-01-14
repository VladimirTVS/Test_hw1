/*
B13
���������� ������ � �������� ����

���������� ���������� ������ � �������� ���� �����.

������ �� �����:
  ���� ����� ��������������� �����.
������ �� ������:
  ��� ����� ����� ������.
  ���������� ������ � �������� ���� � �����.

������ �1
������ �� �����:  1234
������ �� ������: 2 2

*/

#include <stdio.h>

#define BASE	10

int main(void)
{
	int num;
	scanf("%d", &num);

	int odd_cnt = 0, even_cnt = 0;
	for (; num > 0; num /= BASE)
		if (num % BASE % 2) odd_cnt++;

		else
			even_cnt++;

	printf("%d %d\n", even_cnt, odd_cnt);

	return 0;
}
