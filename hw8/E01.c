/*
   E1 �� 1
   ������� �������������� �����
   ������ c ���������� ������ �� 5 ���������, ����� ������� �������������� ���� ��������� �������.

   ������ �� �����:    5 ����� ��������� ����� ����� ������
   ������ �� ������:   ���� ����� � ������� "%.3f"

   ������ �1
   ������ �� �����:    4 15 3 10 14
   ������ �� ������:   9.200

   ������ �2
   ������ �� �����:    1 2 3 4 5
   ������ �� ������:   3.000


 */

#include <stdio.h>

enum {ARRAY_SIZE = 5};

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
    printf("%.3f\n", Average(arr,ARRAY_SIZE));
    return 0;
}
