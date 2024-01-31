/*
 	C11 ��

 	���
 	��������� �������, ������� ���������� ���������� ����� ��������
  	���� ����������� � �������� ������ �� �������������.
 	int nod(int a, int b)
 	������ �� �����: 	��� ����� ������������� �����
 	������ �� ������: 	���� ����� ����� - ���������� ����� ��������.

 	������ �1
 	������ �� �����: 	14 21
 	������ �� ������: 	7


 */


#include <stdio.h>

int nod(int a, int b)
{
	while (a && b)
	{
		if (a >= b)
		{
			a %= b;
		}
		else
		{
			b %= a;
		}
	}
	printf("a = %d\n", a);
	if (a)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main(int argc, char **argv)
{
	unsigned int nunber_a, nunber_b;
	scanf("%d%d", &nunber_a, &nunber_b);
	printf("%d", nod(nunber_a, nunber_b));
	return 0;
}
