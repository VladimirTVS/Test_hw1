/*
B19
Сумма цифр равна 10

Ввести натуральное число и определить, верно ли,
что сумма его цифр равна 10.

Данные на входе:  Натуральное число
Данные на выходе: YES или NO

Пример №1
Данные на входе:  1234
Данные на выходе: YES

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
