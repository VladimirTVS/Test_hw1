/*
   �� �������� � �� �����������
   ������� ������ �� 10 ��������� � ������������� ������ �������� �� �����������, � ������ � �� ��������.

   ������ �� �����:    10 ����� ����� ����� ������
   ������ �� ������:   �������� ������. ������ ����� ������������� �� �����������, ������ �������� �� ��������.

   ������ �1
   ������ �� �����:    14 25 13 30 76 58 32 11 41 97
   ������ �� ������:   13 14 25 30 76 97 58 41 32 11

   ������ �2
   ������ �� �����:    5 4 3 2 1 6 7 8 9 10
   ������ �� ������:   1 2 3 4 5 10 9 8 7 6


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

void SwapArr(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void SortArr(int arr[], int size)
{
    for( int i = 0; i < (size / 2) - 1; i++)
    {
        for (int j = i + 1; j < (size / 2); j++)
        {
            if (arr[i] > arr[j])
            {
                SwapArr(arr, i, j);
            }
        }
    }
    for( int i = (size / 2); i < (size - 1); i++)
    {
        for (int j = (size - 1); j > i; j--)
        {
            if (arr[j] > arr[i])
            {
                SwapArr(arr, j, i);
            }
        }
    }
}

int main(int argc, char **argv)
{
    int arr[ARRAY_SIZE];
    Input(arr,ARRAY_SIZE);
    SortArr(arr, ARRAY_SIZE);
    Print(arr, ARRAY_SIZE);
    return 0;
}
