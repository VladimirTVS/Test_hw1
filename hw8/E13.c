/*
   E13 �� 5
   ������ � ����� ����
   ������� ������ �� 10 ��������� � �������� � ������ ������ ��� �����, � ������� ������ � ����� ����� (����� ��������) � ����.

   ������ �� �����:    10 ����� ����� ����� ������.
   ������ �� ������:   ����� ����� ����� ������, � ������� ������ � ����� ����� - ����

   ������
   ������ �� �����:    40 105 203 1 14 1000 22 33 44 55
   ������ �� ������:   105 203 1 1000


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

int Func(int arr_in[], int size, int arr_out[])
{
    int index = 0;

    for( int i = 0; i < size; i++)
    {
        if (arr_in[i] < 10)
        {
            arr_out[index]=arr_in[i];
            index ++;
        }
        if ((arr_in[i] >= 100) && (arr_in[i]<1000))
        {
            if ((arr_in[i] / 10) %10 == 0)
            {
                arr_out[index]=arr_in[i];
                index ++;
            }
        }
        if (arr_in[i] >= 1000)
        {
            if ((arr_in[i] / 100) %10 == 0)
            {
                arr_out[index]=arr_in[i];
                index ++;
            }
        }
    }

    return index;
}

int main(int argc, char **argv)
{
    int input_arr[ARRAY_SIZE] = {40, 105, 203, 1, 14, 1000, 22, 33, 44, 55};
    int output_arr[] = {0,};
    //Input(input_arr,ARRAY_SIZE);
    int size = Func(input_arr, ARRAY_SIZE, output_arr);
    Print(output_arr, size);
    return 0;
}
