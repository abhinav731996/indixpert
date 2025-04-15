#include <stdio.h>

int main()
{
    // printf("Hello, Abhinav! \n");
    // int number1 = 20;
    // int number2 = 10;
    // int number;
    // int sum = number1 + number2;
    // int sub = number1 - number2;
    // int div = number1 / number2;
    // int mult = number1 * number2;

    // printf("randomNumber(%d) \n", number);
    // printf("%d + %d = %d \n", number1, number2, sum);
    // printf("%d - %d = %d\n", number1, number2, sub);
    // printf("%d / %d = %d\n", number1, number2, div);
    // printf("%d * %d = %d\n", number1, number2, mult);
    // printf("firstNumber(%d) * secondNumer(%d) = output(%d)\n", number1, number2, mult);

    char name[10] = "Abhinav";
    int class = 7;
    int age = 11;
    char grade = 'A';
    float percentage = 92.55;
    double longitude = 28.53196;
    double latitude = 76.36272;

    printf("Name: %s \n", name);
    printf("Class: %d \n", class);
    printf("Age: %d \n", age);
    printf("Grade: %c \n", grade);
    printf("Persent: %.2f \n", percentage);
    printf("Longitude: %lf \n", longitude);
    printf("Latitude: %lf \n", latitude);

    return 0;
    getchar();
}
