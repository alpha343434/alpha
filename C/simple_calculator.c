#include <stdio.h>

float simpleCalculator(float num1, float num2, char operator) {
    float result;

    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero\n");
                return 0;
            }
            result = num1 / num2;
            break;
        default:
            printf("Error: Invalid operator\n");
            return 0;
    }

    return result;
}

int main() {
    float num1, num2, result;
    char operator;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    result = simpleCalculator(num1, num2, operator);
    printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, result);

    return 0;
}

