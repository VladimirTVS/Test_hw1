/*
D9
����� ���� �����

���� ����������� ����� N.
��������� ����� ��� ����.
���������� ��������� ����������� �������.

int sum_digits(int n)

������ �� �����:
- ���� ����������� �����.
������ �� ������:
- ����� ����� - ����� ���� ���������� �����.

������ �1
������ �� �����:  123
������ �� ������: 6

������ �2
������ �� �����:  1000
������ �� ������: 1
*/

#include <stdio.h>

#define BASE    10

int sum_digits(int n)
{
    if (!n)
        return 0;
    return (n % BASE) + sum_digits(n / BASE);
}


int main(void)
{
	int number;
	scanf("%d", &number);

    printf("%d\n", sum_digits(number));

	return 0;
}
