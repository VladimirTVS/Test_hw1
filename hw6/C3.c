/*
    C3 ����� 1

 	������� �������������� �����
 	�������� �������, ������� ���������� ������� ��������������
  	���� ���������� �� ���������� (����������).
 	int middle(int a, int b)
 	������ �� �����: 	��� ����� ��������������� �����
 	������ �� ������: 	���� ����� �����

 	������ �1
 	������ �� �����: 	5 7
 	������ �� ������: 	6

 	������ �2
 	������ �� �����: 	10 20
 	������ �� ������: 	15


 */


#include <stdio.h>

int middle(int a, int b)
{
	return (a + b) / 2;
}

int main(int argc, char **argv)
{
	int nunber_a, nunber_b;
	scanf("%d %d", &nunber_a, &nunber_b);
	printf("%d\n", middle(nunber_a, nunber_b));
	return 0;
}
