/*
D10 ���� 2
�������� �� ��������

���� ����������� ����� n >= 1.
���������, �������� �� ��� �������.
��������� ������ ������� ����� YES, ���� ����� �������
��� NO � ��������� ������.

���������� ��������� ����������� ������� � ������������ ��.

int is_prime(int n, int delitel)

������ �� �����:  ����������� �����
������ �� ������: YES ��� NO

������ �1
������ �� �����:  11
������ �� ������: YES

������ �2
������ �� �����:  12
������ �� ������: NO

������ �3
������ �� �����:  73
������ �� ������: YES
*/

#include <stdio.h>



int is_prime(int n, int delitel)
{
    if (delitel < 2)
        return 1;

    return (n % delitel != 0) * is_prime(n, delitel-1);
}


int main(void)
{
	int num;
	scanf("%d", &num);

    printf("%s\n", is_prime(num, num/2) ? "YES" : "NO");

	return 0;
}