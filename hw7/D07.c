/*
D7
�� 1 �� N

��������� ����������� �������, ������ ���� ����� ��
N �� 1.

������ �� �����:
- ���� ����������� �����
������ �� ������:
- ������������������ ����� ����� �� ����������
- ����� �� 1, ����� ������.

������
������ �� �����:  5
������ �� ������: 5 4 3 2 1
*/

#include <stdio.h>

void print_num(int n)
{
	if (!n)
		return;
    printf("%d ", n);
    print_num(n-1);
}


int main(void)
{
	int number;
	scanf("%d", &number);

    print_num(number);
    puts("");

	return 0;
}
