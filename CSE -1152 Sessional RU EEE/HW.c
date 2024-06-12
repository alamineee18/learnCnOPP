#include <stdio.h>
int main ( )
{
    int a[4][4], r, c, i, j;

    printf("Enter rows of matrix: ");
    scanf("%d", &r);

    printf("Enter columns of matrix: ");
    scanf("%d", &c);

    printf("\nEnter elements of matrix:\n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j){
            printf("Enter element a%d%d: ",i+1, j+1);
            scanf("%d", &a[i][j]);
        }

    printf("\nEntered Matrix: \n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("%d  ", a[i][j]);
            if (j == c-1)
                printf("\n\n");
        }

    return 0;

}
