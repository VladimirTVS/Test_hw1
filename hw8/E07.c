/*
   E7 ������� 2
   �������� ���������
   ������� ������ �� 10 ��������� � ��������� �������� �������� ��� 1-�� � 2-�� ������� �������.
   ���������� �������� ��������� ������ � ���������� ��� ����� ������.

   ������ �� �����:    10 ����� ��������� ������� ����� ������.
   ������ �� ������:   10 ����� ��������� ������� ����� ������.

   ������ �1
   ������ �� �����:    4 -5 3 10 -4 -6 8 -10 1 0
   ������ �� ������:   -4 10 3 -5 4 0 1 -10 8 -6

   ������ �2
   ������ �� �����:    1 2 3 4 5 6 7 8 9 10
   ������ �� ������:   5 4 3 2 1 10 9 8 7 6


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

void SwapArr(int arr[], int i, int j)
{
    // ��� ������ ����������
    // � ��� ���� ��� ����� XOR ��� ��������� ���������� temp?
    // ��� ���������� � �������� ��� � ���������� ������?
    // ������ �� �������, �� ���������.
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void InversionToPrint(int arr[], int size)
{
    for( int i = 0; i < size; i++) {
        if ((i == 0) || (i == 1))
        {
            SwapArr(arr, i, size/2-i-1);
        }
        if (( i == size/2 ) ||( i == size/2 + 1))
        {
            SwapArr(arr, i, ((size -1) -(i-size/2)));
        }
        printf("%d ", arr[i]);
    }
}

int main(int argc, char **argv)
{
    int arr[ARRAY_SIZE];
    Input(arr, ARRAY_SIZE);
    InversionToPrint(arr, ARRAY_SIZE);
    return 0;
}
