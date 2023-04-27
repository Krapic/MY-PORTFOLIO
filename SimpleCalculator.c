#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    double firstNumber, secondNumber;
    char operator;
    start:
    printf("Enter your calculation: \n");
    scanf("%lf %c %lf", &firstNumber, &operator, &secondNumber);
    switch(operator)
    {
    case '+':
        printf("Result = %.4lf\n", firstNumber+secondNumber);
        printf("_____________________________________\n\n");
        break;
    case '-':
        printf("Result = %.4lf\n", firstNumber-secondNumber);
        printf("_____________________________________\n\n");
        break;
    case '*':
        printf("Result = %.4lf\n", firstNumber*secondNumber);
        printf("_____________________________________\n\n");
        break;
    case '/':
        printf("Result = %.4lf\n", firstNumber/secondNumber);
        printf("_____________________________________\n\n");
        break;
    case '^':
        printf("Result = %.4lf\n", pow(firstNumber,secondNumber));
        printf("_____________________________________\n\n");
        break;
    case 'r':
        printf("Result = %.4lf\n", sqrt(firstNumber));
        printf("_____________________________________\n\n");
        break;
    case '%':
        printf("Result = %d\n", (int)firstNumber%(int)secondNumber);
        printf("_____________________________________\n\n");
        break;
    case 'q':
        return 0;
    default:
        printf("Operator is not valid, please try again...\n");
        printf("_____________________________________\n\n");
        goto start;
    } goto start;
    return 0;
}