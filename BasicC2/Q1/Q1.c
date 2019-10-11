#include <stdio.h>
#include <math.h>

// input three number, short them from small to big

void sort_numbers_ascending(int number[])
{
   int temp, i, j, k;
   for (j = 0; j < 3; j++)
   {
      for (k = j + 1; k < 3; k++)
      {
         if (number[j] > number[k])
         {
            temp = number[j];
            number[j] = number[k];
            number[k] = temp;
         }
      }
   }
   printf("The number after sorting in ascending format are:\n");
   for (i = 0; i < 3; ++i)
      printf("%d\n", number[i]);
}
void main()
{
   int i, number[5];
   printf("Please enter three number, one by one: \n");
   for (i = 0; i < 3; ++i)
      scanf("%d", &number[i]);

   sort_numbers_ascending(number);
   getch();
}
