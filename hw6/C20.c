/*
C20 ������ �� *
������
��������� ������ ��������� �� ������ "(" � ")" �� ������������.

������ �� �����: 		�� ���� �������� ������ ��������� �� �������� '(', ')' � ��������������� �������� '.'. ������ ������ �� ����� 1000 ��������.
������ �� ������: 	���������� ���������� ����� YES ���� ������ ����������� ����� � NO � ��������� ������.

������ �1
������ �� �����: 		(()()).
������ �� ������: 	YES

������ �2
������ �� �����: 		()(.
*/

#include <stdio.h>

#define END_MARK	'.'

int input_parens(void)
{
	char ch;
	int cnt = 0;
	while (scanf("%c", &ch) == 1 && ch != END_MARK)
	{
		switch (ch)
		{
			case '(':
				cnt++;
				break;
			case ')':
				cnt--;
				break;
		}
	}
	return cnt;
}


int is_input_valid(int (*f)(void))
{
	return 0 == f();
}


int main(void)
{
	if (is_input_valid(input_parens))
		printf("YES" "\n");
	else
		printf("NO" "\n");

	return 0;
}
