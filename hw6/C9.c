/*
 	C9 ����� 2

 	���������
 	��������� ������� ���������� N!. ������������ �� ��� ���������� ����������
 	int factorial(int n)

 	������ �� �����: 	����� ������������� ����� �� ������ 20
 	������ �� ������: 	����� ������������� �����

 	������ �1
 	������ �� �����: 	5
 	������ �� ������: 	120


 */


#include <stdio.h>
#include <inttypes.h>

unsigned long long factorial(int n)
{
	unsigned long long result = 1;
	if ((n == 0) || (n == 1))
	{
		return result;
	}
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}


int main(int argc, char **argv)
 {
	int number;
	scanf ("%d", &number);
	if ((number >= 0) && ( number <= 20))
	{
		printf ("%"PRIu64, factorial(number));
	}
	return 0;
}
