// #include <stdio.h>

// int main()
// {
//     int  number;
//     int rent = 10000;

//     printf("Please enter amount for this month: ");
//     scanf("%d",&number);

//     if (number == rent)
//     {
//         printf("Paid %d\n", number);
//     }
//     else
//     {
//         printf("please enter correct amount");
//     }
    
    

//     return 0; 
// }



// ++++++++++++++ Even/Odd +++++++++++++++

// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Please enter any number: ");
//     scanf("%d",&num);
//     if (num%2==0)
//     {
//         printf("Even number\n");
        
//     }
//         else
//         {
//             printf("Odd number\n");
//         }
    
//     return 0;
// }

#include<stdio.h>
int main ()
{
    int num1;
    printf("enter 1st numer: ");
    scanf("%d", &num1);
    
    char operator;
    printf("enter any operation(-, +, *): ");
    scanf(" %c", &operator);                       // why do we add space before %c?

    int num2;
    printf("enter 2nd numer: ");
    scanf("%d", &num2);

    if (operator=='-')  
    {
        int sub = num1 - num2;
        printf("%d - %d = %d\n", num1, num2, sub);
    }
    else if (operator == '+')
    {
        int sum = num1 + num2;
        printf("%d + %d = %d\n", num1, num2, sum);
    }
    // else if (operator == '/')
    // {
    //     float div = num1 / num2;
    //     printf("%.2f / %.2f = %.2f", num1, num2, div);
    // }
    else if (operator == '*')
    {
        int mult = num1 * num2;
        printf("%d * %d = %d\n", num1, num2, mult);
    }
    else
    {
        printf("Please enter valid operation!!\n");
    }
    
    return 0;
}