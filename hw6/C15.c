/*
 	C15 �����

 	����� �� �����������
 	��������� ������� ���������� �������, ������� ����������, ����� ��,
  	��� � �������� ����� ��� ����� ����� �� �����������.
  	��������� ������ ������� ������ ������.

 	int grow_up(int n)

 	������ �� �����: 	���� ����� �� ������������� �����
 	������ �� ������: 	YES ��� NO

 	������ �1
 	������ �� �����: 	258
 	������ �� ������: 	YES

 	������ �2
 	������ �� �����: 	528
 	������ �� ������: 	NO


 */


#include <stdio.h>

int grow_up(int n)
{
	int c = 0, d = 0;
	int result = 0;
	c = n % 10;
	n /= 10;
	while (n != 0)
	{
		if (n % 10 >= c)
		{
			 d = 1;
		}
		c = n % 10;
		n /= 10;
	}
	if (!d)
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
		printf("%s", (grow_up(nunber)) ? "YES" : "NO");
	}
	return 0;
}
