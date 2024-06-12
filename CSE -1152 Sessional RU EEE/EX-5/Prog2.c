//WAP to find maximum number in an array

#include <stdio.h>

int main()
{
  int array[100], size, maximum, c, location = 1;

  printf("Enter the number of elements in array: ");
  scanf("%d", &size);

  for (c = 0; c < size; c++){
    printf("Enter element %d : ", c+ 1);
    scanf("%d", &array[c]);
  }


  maximum = array[0];

  for (c = 1; c < size; c++)
  {
    if (array[c] > maximum)
    {
       maximum  = array[c];
       location = c+1;
    }
  }

  printf("Maximum element is present at location %d and it's value is %d.\n", location, maximum);
  return 0;
}
