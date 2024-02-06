/*
   E9
   ����������� ����� ������� ������
   ������� ������ �� 10 ��������� � ��������� ����������� ����� ������ �� 1.

   ������ �� �����:    10 ����� ����� ����� ������
   ������ �� ������:   10 ����� ����� ����� ������ ��������� ������ �� 1 ������� ����������

   ������ �1
   ������ �� �����:    4 -5 3 10 -4 -6 8 -10 1 0
   ������ �� ������:   0 4 -5 3 10 -4 -6 8 -10 1

   ������ �2
   ������ �� �����:    1 2 3 4 5 6 7 8 9 10
   ������ �� ������:   10 1 2 3 4 5 6 7 8 9


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

void Print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void ShiftRightArray(int arr[], int size, int shift)

{
    for (int j = 0; j < shift; j++ )
    {
        int temp = arr[size-1];
        for (int i = size - 1; i > 0; i--)
        {
            arr[i] = arr[i -1];
        }
        arr[0] = temp;
    }
}

int main(int argc, char **argv)
{
    int arr[ARRAY_SIZE];
    Input(arr,ARRAY_SIZE);
    ShiftRightArray(arr, ARRAY_SIZE, 1);
    Print(arr, ARRAY_SIZE);
    return 0;
}
