/*
 	C17 ��

 	����� ���� ����� ������������

 	��������� ���������� �������, ������� ����������, ����� ��,
 	��� � ������ ����� ����� ���� ����� ������������.

 	int is_happy_number(int n)

 	������ �� �����: 	����� �� ������������� �����
 	������ �� ������: 	YES ��� NO

 	������ �1
 	������ �� �����: 	123
 	������ �� ������: 	YES

 	������ �2
 	������ �� �����: 	528
 	������ �� ������: 	NO


 */


#include <stdio.h>

int is_happy_number(int n)
{
	int sum = 0, proiz = 1;
	int result = 0;
	while (n != 0)
	{
		sum += n % 10;
		proiz *= n % 10;
		n /= 10;
	}
	if (sum == proiz)
	{
		return result = 1;
	}
	return result;
}

int main(int argc, char **argv)
{
	unsigned int nunber;
	scanf("%d", &nunber);
	if (nunber >= 0)
	{
		printf("%s", (is_happy_number(nunber)) ? "YES" : "NO");
	}
	return 0;
}
