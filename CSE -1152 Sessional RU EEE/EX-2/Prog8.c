//Find the grade of a course
#include<stdio.h>
int main()
{
    int mark;
    printf("Give your Mark: ");
    scanf("%d",&mark);

    if(mark>100){
        printf("INVALID NUMBER");
    }

    else if(mark>=80){
            printf("Result is A+");
        }

    else if(mark>=75){
        printf("Result is A");
    }

    else if(mark>=70){
        printf("Result is A-");
    }

    else if(mark>=65){
        printf("Result is B+");
    }

    else if(mark>=60){
        printf("Result is B");
    }

    else if(mark>=55){
        printf("Result is B-");
    }

    else if(mark>=50){
        printf("Result is C+");
    }

    else if(mark>=45){
        printf("Result is C");
    }

    else if(mark>=40){
        printf("Result is D");
    }

    else{
        printf("FAIL");
    }

    return 0;

}


