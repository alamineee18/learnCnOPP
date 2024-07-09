
#include <stdio.h>
#include <math.h>
#include <string.h>
/*The M_PI constant is defined in the math.h header file, 
but it is not part of the C standard. Some compilers, 
such as Microsoft Visual C++, do not define M_PI by default. 
To solve this issue, you can define M_PI manually*/
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

void rectangle() {
    double base, height;
    printf("Enter base length: ");
    scanf("%lf", &base);
    printf("Enter height: ");
    scanf("%lf", &height);
    printf("Area is %.2lf\n", base * height);
    printf("Circumference is %.2lf\n", 2 * (base + height));
}

void parallelogram() {
    double base, height;
    printf("Enter base length: ");
    scanf("%lf", &base);
    printf("Enter height: ");
    scanf("%lf", &height);
    printf("Area is %.2lf\n", base * height);
}

void triangle() {
    double base, height;
    printf("Enter base length: ");
    scanf("%lf", &base);
    printf("Enter height: ");
    scanf("%lf", &height);
    printf("Area is %.2lf\n", 0.5 * base * height);
}

void circle() {
    double radius;
    printf("Enter radius: ");
    scanf("%lf", &radius);
    printf("Area is %.2lf\n", M_PI * radius * radius);
    printf("Circumference is %.2lf\n", 2 * M_PI * radius);
}

void calculator() {
    double a, b;
    char op;
    int result;
    printf("Enter first value: ");
    //for error haldaling
    result = scanf("%lf", &a);
    while (result != 1) {
        printf("Invalid input. Please enter a number: ");
        scanf("%*s");
        result = scanf("%lf", &a);
    }
    printf("Enter second value: ");
    //for error haldaling
    result = scanf("%lf", &b);
    while (result != 1) {
        printf("Invalid input. Please enter a number: ");
        scanf("%*s");
        result = scanf("%lf", &b);
    }

    printf("Choose an operator (+ - * / %%): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", a, b, a + b);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", a, b, a - b);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", a, b, a * b);
            break;
        case '/':
            if (b == 0) {
                printf("Error: Cannot divide by zero.\n");
            } else {
                printf("%.2lf / %.2lf = %.2lf\n", a, b, a / b);
            }
            break;
        case '%':
            if (b == 0) {
                printf("Error: Cannot divide by zero.\n");
            } else {
                printf("%.2lf %% %.2lf = %.2lf\n", a, b, fmod(a, b));
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }
}

int main() {
    int choice;

        printf("\nMain Menu:\n");
        printf("1. Shapes\n");
        printf("2. Calculator\n");
        printf("3. Exit\n");

    while (1)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            char shape[20];
            printf("\nEnter shape name (rectangle/parallelogram/triangle/circle): ");
            scanf("%s", shape);

            if (strcmp(shape, "rectangle") == 0) {
                rectangle();
            } else if (strcmp(shape, "parallelogram") == 0) {
                parallelogram();
            } else if (strcmp(shape, "triangle") == 0) {
                triangle();
            } else if (strcmp(shape, "circle") == 0) {
                circle();
            } else {
                printf("\nError: Invalid shape name.\n");
            }
        } else if (choice == 2) {
            calculator();
        }

        else {
            printf("\nError: Invalid choice.\n");
        }
        
    }
    
    return 0;
}
