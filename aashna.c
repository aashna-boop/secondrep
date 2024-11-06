#include <stdio.h>

int main() {
    char op;
    int num1, num2, result;

    printf("welcome! Which operation do you want to do? (+, -, *, div): ");
    scanf(" %c", &op);

    printf("Cool! Now enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf(" %f + %f gives you %f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf(" %f - %f gives you %f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf(" %f * %f gives you %f\n", num1, num2, result);
            break;
        case 'div':
            if (num2 != 0) {
                result = num1 / num2;
                printf(" %f / %f gives you %f\n", num1, num2, result);
            } else {
                printf("oops! You can't divide by zero. Try again with a different number.\n");
            }
            break;
        default:
            printf("oops! that's not a valid operation. Try again with +, -, *, or div.\n");
    }

    return 0;
}
