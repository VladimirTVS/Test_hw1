/*
C14 ����
����� ���� �����

��������� ������� ���������� �������, ������� ����������, ����� ��,
��� ����� ��� ���� � ������ �����. ��������� ��� ������� ������ ������.

������ �� �����:  ���� ����� �� ������������� �����
������ �� ������: ����� YES ��� NO

������ �1
������ �� �����:  136
������ �� ������: YES

������ �2
������ �� �����:  245
������ �� ������: NO
*/

#include <stdio.h>

#define BASE	10

int is_sum_even(int num)
{
	int sum = 0;
	while (num > 0)
	{
		sum += num % BASE;
		num /= BASE;
	}
	return sum % 2 == 0;
}


int main(void)
{
	int number;
	scanf("%d", &number);

	if (is_sum_even(number))
		printf("YES" "\n");
	else
		printf("NO" "\n");

	return 0;
}
