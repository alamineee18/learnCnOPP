//Find the maximum / minimum
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("The value of A:");
    scanf("%d",&a);

    printf("The value of B:");
    scanf("%d",&b);

    printf("The value of C:");
    scanf("%d",&c);

    if(a>b){
        if(a>c){
            printf("Maximum = %d\n",a);
            }

        else{
            printf("Maximum = %d\n",c);
        }
    }

    else{
        if(b>c){
            printf("Maximum = %d\n",b);
        }
        else{
            printf("Maximum = %d\n",c);
        }
    }


    if(a<b){
        if(a<c){
            printf("Minimum = %d",a);
        }
        else{
            printf("Minimum = %d",c);
        }
    }

    else{
        if(b<c){
            printf("Minimum = %d",b);
        }
        else{
            printf("Minimum = %d",c);
        }
    }
    return 0;

}

