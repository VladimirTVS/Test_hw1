/*
   E3 ������� 1 ������ �� ������
   �������� � �������
   ������� ������ �� 10 ��������� � ����� � ��� ������������ � ����������� �������� � �� ������.

   ������ �� �����:    10 ����� ����� ����� ������
   ������ �� ������:   4 ����� ����� ����� ������: ����� ���������, ��������, ����� ��������, �������.

   ������ �1
   ������ �� �����:    4 -5 3 10 -4 -6 8 -10 1 0
   ������ �� ������:   4 10 8 -10

   ������ �2
   ������ �� �����:    1 2 3 4 5 6 7 8 9 10
   ������ �� ������:   10 10 1 1


 */

#include <stdio.h>

enum {ARRAY_SIZE = 10};

void Input(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int MaxPoz(int arr[], int size)
{
    int max = arr[0];
    int max_poz = 1;
    for (int i = 1; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            max_poz = i + 1;
        }
    }
    return max_poz;
}

int Max(int arr[], int size)
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

int MinPoz(int arr[], int size)
{
    int min = arr[0];
    int min_poz = 1;
    for (int i = 1; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            min_poz = i + 1;
        }
    }
    return min_poz;
}

int Min(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int main(int argc, char **argv)
{
    int arr[ARRAY_SIZE];
    Input(arr, ARRAY_SIZE);
    printf("%d ", MaxPoz(arr, ARRAY_SIZE));
    printf("%d ", Max(arr, ARRAY_SIZE));
    printf("%d ", MinPoz(arr, ARRAY_SIZE));
    printf("%d ", Min(arr, ARRAY_SIZE));
    return 0;
}
