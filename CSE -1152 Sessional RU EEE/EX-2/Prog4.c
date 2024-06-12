//user enter a character and display a message

#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter any key : ");
    scanf("%c", &ch);

    if(isalpha (ch)>0){
        printf("The key is a letter");
    }

    else if(isdigit (ch)>0){
        printf("The key is a digit");
    }

    else{
        printf("The key is a special Character");
    }

    return 0;
}
