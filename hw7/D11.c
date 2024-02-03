/*
D11 �� 3
���������� 1

���� ����������� ����� N.
��������� ���������� �1� � �������� ������ �����.

������ �� �����:
- ����������� �����
������ �� ������:
- ����� ����� - ���������� ������ � �������� ������ �����.

������ �1
������ �� �����:  5
������ �� ������: 2

������ �2
������ �� �����:  255
������ �� ������: 8
*/

#include <stdio.h>

int count_ones(int n)
{
    if (n < 2)
        return n;

    return (n%2) + count_ones(n/2);
}


int main(void)
{
	int number;
	scanf("%d", &number);

    printf("%d\n", count_ones(number));

	return 0;
}
