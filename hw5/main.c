#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
	setlocale (LC_ALL, "Rus");


    int a;    
    printf("Введите целое число: \n");
    scanf ("%d", &a); 

    int count = 0; 
    for (; a>0 ;a/=10)
    {

		
		if (a%10 == 9)
		{

			count++;
			if (count>1)
			{
				printf ("NO\n");
				return 0;
			}
		}
    }
   (count==1)?printf ("YES\n"):printf ("NO\n"); 

	return 0;
}
