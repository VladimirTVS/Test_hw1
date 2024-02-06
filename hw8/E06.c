/*
   E6
   ������� �������������� �������
   ������� ������ �� 12 ��������� � ���������� ������� �������������� ��������� �������.

   ������ �� �����:    12 ����� ����� ����� ������
   ������ �� ������:   ������� �������������� � ������� "%.2f"

   ������ �1
   ������ �� �����:    4 -5 3 10 -4 -6 8 -10 1 0 5 7
   ������ �� ������:   1.08

   ������ �2
   ������ �� �����:    1 2 3 4 5 6 7 8 9 10 11 12
   ������ �� ������:   6.50


 */

#include <stdio.h>

enum {ARRAY_SIZE = 12};

void Input(int arr[], int size)
{
    int i;
    for (i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

float Average(int arr[], int size)
{
    int average = 0;
    for (int i=0; i<size; i++)
    {
        average += arr[i];
    }
    return (float)average/size;
}

int main(int argc, char **argv)
{
    int arr[ARRAY_SIZE];
    Input(arr, ARRAY_SIZE);
    printf("%.2f\n", Average(arr,ARRAY_SIZE));
    return 0;
}
