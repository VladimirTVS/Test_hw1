/*
D6
������ ��������

���� ������, ��������������� �������� ����� '.'.
���������� ������ ��������.
���������� ����������� �������, ������� ���������
� �������� ������ ��������.

void reverse_string()

������ �� �����:
- ������ �� ���������� ���� � ������ ����������.
- � ����� ������ ������ �����.
������ �� ������:
- �������� ������ ����� �������.


*/

#include <stdio.h>

#define END_MARKER  '.'

void reverse_string(void)
{
    char ch;
    if (scanf("%c", &ch) != 1)
        return;

    if (ch == END_MARKER)
        return;

    reverse_string();
    printf("%c", ch);
}


int main(void)
{
    reverse_string();
    puts("");
	return 0;
}
