#include <stdio.h>

int main()
{
    printf("Hello, Abhinav! \n");
    int number1 = 20;
    int number2 = 10;
    int number;
    int sum = number1 + number2;
    int sub = number1 - number2;
    int div = number1 / number2;
    int mult = number1 * number2;

    printf("randomNumber(%d) \n", number);
    printf("%d + %d = %d \n", number1, number2, sum);
    printf("%d - %d = %d\n", number1, number2, sub);
    printf("%d / %d = %d\n", number1, number2, div);
    printf("%d * %d = %d\n", number1, number2, mult);
    printf("firstNumber(%d) * secondNumer(%d) = output(%d)\n", number1, number2, mult);
    return 0;
    getchar();
}
