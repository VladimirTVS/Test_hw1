/*
  F3 ���� 1
  ����� �� �����������
  �������� ������� � ���������, ��������������� ������ ������ �������.
  ������� � ������� ����������� �����, �������� � ���������� ������
  ������������ ����� N, �� ����� 1000 ����.
  ����� ������ ������� ��� ������ ����� ����������� � �����.
  ������ �� �����:     ����������� ����� �� ����� 1000 ����
  ������ �� ������:    ����� �������� � ����� ����� ������ � ������� �����������.
  �� ����� ������� ����� �� ����� ������� � ����������.

  ������ �1
  ������ �� �����:     54321
  ������ �� ������:    1 1 2 1 3 1 4 1 5 1

  ������ �2
  ������ �� �����:     22443344
  ������ �� ������:    2 2 3 2 4 4


 */

#include <stdio.h>

void PrintDigist( int len, int arr[])
{
    for (int i = 0; i < len; i++)
        if (arr[i] > 0)
            printf("%d %d\n", i, arr[i]);
}

void count_digits(char n[], int* res)
{
    for (int i=0; n[i]!=0; i++)
        res[n[i] - '0']++;
}

int main()
{
    enum {BUFFER_SIZE = 1000};
    char buffer[BUFFER_SIZE];
    int r[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    scanf("%s", buffer);
    count_digits(buffer, r);
    PrintDigist(10, r);
    return 0;
}
