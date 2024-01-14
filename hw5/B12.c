/*
B12
���������� � ���������� �����

������������ ���� ������������ ����� � ����������.
��������� ������ ���������� ���������� � ����������
�����, ������� ������ � ������ ������� ������������
�����.

������ �� �����:
  ����� ��������������� �����
������ �� ������:
  ��� ����� ����� ������.
  ������� ���������� ����� �����, ����� ����������.

������ �1
������ �� �����:  15
������ �� ������: 1 5

*/

#include <stdio.h>

#define BASE	10

int main(void)
{
	int num;
	scanf("%d", &num);

	int min, max;
	min = max = num % BASE;
	num /= BASE;
	for (int digit; num > 0; num /= BASE)
	{
		digit = num % BASE;
		min = digit < min ? digit : min;
		max = digit > max ? digit : max;
	}

	printf("%d %d\n", min, max);

	return 0;
}
