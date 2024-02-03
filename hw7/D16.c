/*
   D16 ������� 3

   ������ ������� ������
   �������� ���������� ����������� ������� � ��������� �� ����������
   �������� �� ��������� ����������� ����� ������ �������� ������.

   ������ �� �����:    ���� ����������� �����.
   ������ �� ������:   YES ��� NO

   ������ �1
   ������ �� �����:    8
   ������ �� ������:   YES

   ������ �2
   ������ �� �����:    7
   ������ �� ������:   NO


 */


#include <stdio.h>

int is2pow(int num)
{
    if (num == 1 || num == 2)
    {
        return 1;
    }
    if ((num % 2) != 0)
    {
        return 0;
    }
    else
    {
        return is2pow(num / 2);
    }
}


int main(int argc, char **argv)
{
    int number;
    scanf("%d", &number);
    if (number > 0)
    {
        printf ("%s", (is2pow(number) == 1) ? "YES" : "NO");
    }
    return 0;
}
