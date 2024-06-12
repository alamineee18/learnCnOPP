//WAP to sort an array in descending order

#include <stdio.h>
int main ()
{

    int array[30], i, j, a, n;

    printf("Enter the value of N\n");
    scanf("%d", &n);

    printf("Enter the numbers \n");
    for (i = 0; i < n; ++i){
        scanf("%d", &array[i]);
    }


    for (i = 0; i < n; ++i) {
        for (j = i + 1; j < n; ++j){
            if (array[i] < array[j]) {
                a = array[i];
                array[i] = array[j];
                array[j] = a;
            }
        }
    }

    printf("The numbers arranged in descending order are given below\n");

    for (i = 0; i < n; ++i) {
        printf("%d\n", array[i]);
    }
    return 0;
}
