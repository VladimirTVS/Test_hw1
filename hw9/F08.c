/*
  F8 ����� 2
  ����������� �����
  �� ������� ������ �� ����� https://itnan.ru/post.php?c=1&p=538298
  �������� ������� � ���������, ��������������� ������ ������ �������.
  � ������������������ �������� ����� ����� �� M �� N ( M ������ N,
  M ������ ��� ����� 1) � ������������ �������, �� ���� �� ����� ���������
  (��������� ����������� ����� �� ������ ����). N �� ����������� 1000.
  ������������������ ������������� ������ 0. ���������� ����������� �����.

  ������ �� �����:     ������������������ ����� ����� �� M �� N. M, N �� ����������� 1000.
  ������ �� ������:    ���� ����� �����

  ������ �1
  ������ �� �����:     2 3 1 4 7 6 9 8 10 0
  ������ �� ������:    5

  ������ �2
  ������ �� �����:     41 40 39 38 37 36 34 33 32 31 50 49 48 47 46 45 44 43 42 30 0
  ������ �� ������:    35


 */

#include <stdio.h>

void Input(int arr[], int size)
{
    int i;
    for (i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
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

int FindMissing(int arr[], int size)
{
    int result = 0;
    int min = Min(arr, size);
    int max = Max(arr, size);

    for (int i = min; i <= max; i++)
    {
        result ^= i;
        //result += i;
    }

    for (int i = 0; i < size; i++)
    {
        result ^=arr[i];
        //result -=arr[i];
    }
    return result;
}

int main()
{
    printf("Enter the number of array elements\nsize = ");
    int size = 0;
    scanf("%d", &size);
    int array[size];
    Input(array, size);
    printf("%d\n", FindMissing(array, size));
    return 0;
}
