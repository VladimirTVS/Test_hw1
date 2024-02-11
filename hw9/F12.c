/*
 * F12 �5 ������
 * �������� �������
 * �������� ������� � ���������, ��������������� ������ ������ �������, ������� ������ � ������� ����������� � ������������ ������� �������. �������� �������
 * void change_max_min(int size, int a[])
 *
 * ������ �� �����:     ������� ��������� �� ���� ������ ������� � ������ ����� ���� int
 * ������ �� ������:    ������� �� ���������� ��������, ���������� ������ ����������� �� ����� ���������.
 *
 * ������
 * ������ �� �����:     1 2 3 4 5 6 7 8 9 10
 * ������ �� ������:    10 2 3 4 5 6 7 8 9 1
 *
 *
 */

#include <stdio.h>


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
    int max_poz = 0;
    for (int i = 1; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            max_poz = i;
        }
    }
    return max_poz;
}

int MinPoz(int arr[], int size)
{
    int min = arr[0];
    int min_poz = 0;
    for (int i = 1; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            min_poz = i;
        }
    }
    return min_poz;
}


void SwapArr(int arr[], int i, int j)
{
    arr[i] ^= arr[j];
    arr[j] ^= arr[i];
    arr[i] ^= arr[j];
}

void change_max_min(int size, int a[])
{
    int min_poz = MinPoz(a, size);
    int max_poz = MaxPoz(a, size);
    SwapArr(a, min_poz, max_poz);
}

void Print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    enum {BUFFER_SIZE = 10};
    int arr[BUFFER_SIZE];
    Input(arr, BUFFER_SIZE);
    change_max_min(BUFFER_SIZE, arr);
    Print(arr, BUFFER_SIZE);
    return 0;
}
