/*
   B8
   ����� ���� ����� 9.

    ������ ����� ����� � ����������, ����� ��, ��� � ��
    ����� ���� ����� �9�.

    ������ �� �����:  ���� ����� �����
    ������ �� ������: ���� �����: YES ��� NO
 */


#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
	setlocale (LC_ALL, "Rus");


    int a;    // ���������� ������������� ����������
    printf("������� ����� �����: \n");
    scanf ("%d", &a); // ������� ����� � �������� ��� �� ������ a

    int count = 0; // ���� coumt
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
   (count==1)?printf ("YES\n"):printf ("NO\n"); // ����� �� ����� count

	return 0;
}
