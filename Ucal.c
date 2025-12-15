/* 
    Author  : Umair Farooq
    Program : Calculator
*/

#include <stdio.h>

int main() {
    char ch;
    float num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &ch);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (ch) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2f", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2f", result);
            break;

        case '/':
            if (num2 != 0)
                printf("Result = %.2f", num1 / num2);
            else
                printf("Error: Division by zero!");
            break;

        default:
            printf("Invalid operator!");
    }

    return 0;
}
