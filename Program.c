#include <stdio.h>

void add(float x, float y) {
    printf("Result: %.2f\n", x + y);
}

void subtract(float x, float y) {
    printf("Result: %.2f\n", x - y);
}

void multiply(float x, float y) {
    printf("Result: %.2f\n", x * y);
}

void divide(float x, float y) {
    if (y == 0) {
        printf("Error! Division by zero.\n");
    } else {
        printf("Result: %.2f\n", x / y);
    }
}

int main() {
    int choice;
    float num1, num2;

    printf("Simple Calculator\n");
    printf("Select operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    while (1) {
        printf("Enter choice (1/2/3/4): ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 4) {
            printf("Invalid choice! Please select a valid operation.\n");
            continue;
        }

        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);

        switch (choice) {
            case 1:
                add(num1, num2);
                break;
            case 2:
                subtract(num1, num2);
                break;
            case 3:
                multiply(num1, num2);
                break;
            case 4:
                divide(num1, num2);
                break;
        }

        char continueCalc;
        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &continueCalc);
        if (continueCalc != 'y' && continueCalc != 'Y') {
            break;
        }
    }

    return 0;
}