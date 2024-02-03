/*
   D20 ��

   �������� � �������
   �������� ����������� ������� ���������� ������ ����� n � ������� p.
   int recurs_power(int n, int p)
   ��������� ������ �������, ������ ������.

   ������ �� �����:    ��� ����� ����� -100 >= n >= 100 � 0 >= p >= 100
   ������ �� ������:   ���� ����� ����� n � ������� p

   ������ �1
   ������ �� �����:    2 3
   ������ �� ������:   8

   ������ �2
   ������ �� �����:    3 4
   ������ �� ������:   81


 */


#include <stdio.h>

int recurs_power(int n, int p)
{
    if (p != 0)
    {
        return n * recurs_power(n, p - 1);
    }
    return 1;
}

int main(int argc, char **argv)
{
    int num_n, num_p;
    scanf("%d%d", &num_n, &num_p);
    if ((num_n >= -100) && (num_n <= 100) && (num_p >= 0) && (num_p <= 100))
        printf ("%d", recurs_power(num_n, num_p));
    return 0;
}
