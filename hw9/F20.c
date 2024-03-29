/*
  F20
  ������ � ��������
  �������� ������� � ���������, ��������������� ������ ������ �������.
  ��� ������������� ������ �� 10 ���������. ���������� ����������
  ���������� ������ � �������� �����. ���� ���������� ������ �����
  ������, ��� ���������� ��������, �������� ������ �������� ����� ��
  ������������ �������� ���� � ��� ���������� ������. ���� ����������
  �������� ����� ������ ��� ����� ���������� ������, �������� ������
  ������ ����� �� ������������ ������ ���� � ��� ���������� ������.

  ������ �� �����:     10 ����� ����� ����� ������
  ������ �� ������:    10 ����� ����� ����� ������

  ������ �1
  ������ �� �����:     48 31 20 61 97 12 18 100 200 123
  ������ �� ������:    48 3 20 1 63 12 18 100 200 3

  ������ �2
  ������ �� �����:     48 25 57 34 23 91 90 85 30 79
  ������ �� ������:    32 25 57 4 23 91 0 85 0 79



 */

#include <stdio.h>

void Input(int size, int arr[])
{
    int i;
    for (i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void Print(int size, int arr[])
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int PositiveNegative(int size, int arr[])
{
    int positive = 0;
    int negative = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0)
        {
            positive++;
        }
        else
        {
            negative++;
        }
    }
    return (negative >= positive) ? 0 : 1;
}

int MultiplyingNumbers(int pos_neg, int num)
{
    int temp = 1;
    while (num > 0)
    {
        if ((pos_neg) && (num % 10) % 2 != 0)
        {
            temp *= num % 10;
        }
        if ((!pos_neg) && (num % 10) % 2 == 0)
        {
            temp *= num % 10;
        }
        num /= 10;
    }
    return temp;
}

void ModifiArray(int size, int arr[])
{
    int pos_neg = PositiveNegative(size, arr);
    for(int i = 0; i < size; i++)
    {
        if ((pos_neg) && (arr[i] % 2 != 0))
        {
            arr[i] = MultiplyingNumbers(pos_neg, arr[i]);
        }
        if ((!pos_neg) && (arr[i] % 2 == 0))
        {
            arr[i] = MultiplyingNumbers(pos_neg, arr[i]);
        }
    }
}

int main()
{
    enum {BUFFER_SIZE = 10};
    int arr[BUFFER_SIZE];
    Input(BUFFER_SIZE, arr);
    ModifiArray(BUFFER_SIZE, arr);
    Print(BUFFER_SIZE, arr);
    return 0;
}
