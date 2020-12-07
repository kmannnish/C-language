#include <stdio.h>

int main()
{
    int first, second;
    char operator;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter your first operands: ");
    scanf("%d", &first);
    printf("Enter your second operands:");
    scanf("%d", &second);
    
    switch (operator) {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
        break;
        // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}