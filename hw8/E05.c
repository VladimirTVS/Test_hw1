/*
   E5
   ����� ������������� ���������
   ������� ������ �� 10 ��������� � ���������� ����� ������������� ��������� �������.

   ������ �� �����:    10 ����� ����� ����� ������
   ������ �� ������:   ���� ����� ����� - ����� ������������� ��������� �������

   ������ �1
   ������ �� �����:    4 -5 3 10 -4 -6 8 -10 1 0
   ������ �� ������:   26

   ������ �2
   ������ �� �����:    1 -2 3 -4 5 -6 7 -8 9 0
   ������ �� ������:   25


 */

#include <stdio.h>

enum {ARRAY_SIZE = 10};

void Input(int arr[], int size)
{
    int i;
    for (i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int SumPositive(int arr[], int size)
{
    int sum = 0;
    for (int i=0; i<size; i++)
    {
     if (arr[i] > 0)
        {
            sum += arr[i];
        }
    }
    return sum;
}

int main(int argc, char **argv)
{
    int arr[ARRAY_SIZE];
    Input(arr, ARRAY_SIZE);
    printf("%d\n", SumPositive(arr,ARRAY_SIZE));
    return 0;
}
