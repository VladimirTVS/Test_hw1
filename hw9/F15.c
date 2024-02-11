/*
  F15
  ������ �� ������
  �������� ������� � ���������, ��������������� ������ ������ �������,
  ������� ���������� � �������, ��������� �� ������������� � ������������� �����,
  ������� ��������� ����������� �� ������ ������������ �������.
  �������� �������
  int count_bigger_abs(int n, int a[]);

  ������ �� �����:     ������� �������� ������ ������� � ������ ����� �����
  ������ �� ������:    ������� ���������� ����� ����� ������ ���������� ���������
                       ������������� �� ������ ������������ �������.

  ������
  ������ �� �����:     1 -20 3 4 -50 6 7 8 9 10
  ������ �� ������:    2


 */

#include <stdio.h>
#include <stdlib.h>


void Input(int size, int arr[])
{
    int i;
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int Max(int size, int arr[])
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int count_bigger_abs(int n, int a[])
{
    int result = 0;
    int max = Max(n, a);
    for (int i = 0; i < n; i++)
    {
        if (abs(a[i]) > max)
        {
            result++;
        }
    }
    return result;
}

int main()
{
    enum {BUFFER_SIZE = 10};
    int arr[BUFFER_SIZE] = {0};
    Input(BUFFER_SIZE, arr);
    int res = count_bigger_abs(BUFFER_SIZE, arr);
    printf("%d", res);
    return 0;
}
