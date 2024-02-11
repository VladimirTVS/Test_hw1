/*
  F19 �� 6
  ������ ��������
  �������� ������� � ���������, ��������������� ������ ������ �������.
  ���������� ���������� ������������� ��������� ���������� �������,
  ����������� �� �������� ������� �������������� ���� ��������� �������
  ���������. ����������� ������� ������� �������������� ������� ���������.

  ������ �� �����:     5 ����� �� 5 ����� ����� ����� ������
  ������ �� ������:    ���� ����� �����

  ������
  ������ �� �����:     1 1 1 1 1 2 2 2 2 2 3 3 3 3 3 4 4 4 4 4 5 5 5 5 5
  ������ �� ������:    10


 */

#include <stdio.h>

void InputArray(int size_a, int size_b, int arr[size_a][size_b])
{

    for (int i = 0; i < size_a; i++)
    {
        for (int j = 0; j < size_b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

int Average(int size_a, int size_b, int arr[size_a][size_b])
{
    int average = 0;
    for (int i = 0; i < size_a; i++)
    {
        for (int j = 0; j < size_b; j++)
        {
            if (i == j)
            {
                average += arr[i][j];
            }
        }
    }
    average /= size_a;
    return average;
}

void PrintNumAverage(int size_a, int size_b, int arr[size_a][size_b])
{
    int average = Average(size_a, size_b, arr);
    int cnt = 0;
    for (int i = 0; i < size_a; i++)
    {
        for (int j = 0; j < size_b; j++)
        {
            if (arr[i][j] > average)
            {
                cnt ++;
            }
        }
    }
    printf("%d\n", cnt);
}

int main()
{
    enum {BUFFER_SIZE_A = 5, BUFFER_SIZE_B = 5};
    int arr[BUFFER_SIZE_A][BUFFER_SIZE_B] = {0};
    InputArray(BUFFER_SIZE_A, BUFFER_SIZE_B, arr);
    PrintNumAverage(BUFFER_SIZE_A, BUFFER_SIZE_B, arr);
    return 0;
}
