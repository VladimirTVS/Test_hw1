/*
   B8
   Ровно одна цифра 9.

    Ввести целое число и определить, верно ли, что в нём
    ровно одна цифра «9».

    Данные на входе:  Одно целое число
    Данные на выходе: Одно слово: YES или NO
 */


#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
	setlocale (LC_ALL, "Rus");


    int a;    // объявление целочисленных переменных
    printf("Введите целое число: \n");
    scanf ("%d", &a); // Считать число и записать его по адресу a

    int count = 0; // флаг coumt
    for (; a>0 ;a/=10)
    {

		//printf ("%d\n",a%10);
		if (a%10 == 9)
		{

			count++;
			if (count>1)
			{
				printf ("NO\n");
				return 0;
			}
		}
	}
   (count==1)?printf ("YES\n"):printf ("NO\n"); // Вывод по флагу count

	return 0;
}
