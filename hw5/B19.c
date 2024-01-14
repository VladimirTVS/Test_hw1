/*
B19
����� ���� ����� 10

������ ����������� ����� � ����������, ����� ��,
��� ����� ��� ���� ����� 10.

������ �� �����:  ����������� �����
������ �� ������: YES ��� NO

������ �1
������ �� �����:  1234
������ �� ������: YES

*/

#include <stdio.h>

#define B	10
#define T	10

int main(void)
{
	int num;
	scanf("%d", &num);

	int sum = 0, flag = 0;
	while (num > 0 && !flag && sum <= T)
	{
		sum += num % B;
		if (sum == T)
			flag = 1;
		num /= B;
	}

	if (flag)
		printf("YES" "\n");
	else
		printf("NO" "\n");

	return 0;
}
