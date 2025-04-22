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
//      else
//      {
//        printf("Odd number\n");
//       }
    
//     return 0;
// }




// +++++++++++++++++++ Cal. (-, +, *, /) ++++++++++++++++++

// #include<stdio.h>
// int main ()
// {
//     int num1;
//     printf("enter 1st numer: ");
//     scanf("%d", &num1);
    
//     char operator;
//     printf("enter any operation(-, +, *, /): ");
//     scanf(" %c", &operator);                       // why do we add space before %c?

//     int num2;
//     printf("enter 2nd numer: ");
//     scanf("%d", &num2);

//     if (operator=='-')  
//     {
//         int sub = num1 - num2;
//         printf("%d - %d = %d\n", num1, num2, sub);
//     }
//     else if (operator == '+')
//     {
//         int sum = num1 + num2;
//         printf("%d + %d = %d\n", num1, num2, sum);
//     }
//     else if (operator == '/')
//     {
//         float div = (float)num1 / num2;
//         printf("%d / %d = %.2f\n", num1, num2, div);
//     }
//     else if (operator == '*')
//     {
//         int mult = num1 * num2;
//         printf("%d * %d = %d\n", num1, num2, mult);
//     }
//     else
//     {
//         printf("Please enter valid operation!!\n");
//     }
    
//     return 0;
// }



// +++++++++++  fiond +ve & -ve number ++++++++++

// #include<stdio.h>
// int main()
// {
//     int userInput;
//     printf("please enter any number: ");
//     scanf("%d", &userInput);

//     if (userInput>0)
//     {
//         printf("The number is positive\n");
//     }
//     else if (userInput<0)
//     {
//         printf("The number is negitive\n");
//     }
//     else{
//         printf("Number is zero");
//     }
    
//     return 0;
// }




//+++++++++ find is the number even or odd in b/w 0-100 +++++++++++

// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("please enter any number 0-100: ");
//     scanf("%d", &num);

//     if (num>0, num<100)
//     {
//         if (num%2==0)
//         {
//             printf("Your numbe is even number: %d", num);
            
//         }
//         else
//         {
//             printf("Your number is odd: %d", num);n
//         }
        
//     }

//     return 0;
// }



//+++++++++++ Squar & Cube +++++++++++++++

// #include<stdio.h>
// int main()
// {
//     printf("1 for squar: \n");
//     printf("2 for cube: \n");
//     int option;
//     printf("Please select any option: ");
//     scanf("%d",&option);

//     int num;
//     printf("pleas enter any number: ");
//     scanf("%d",&num);

//     if (option==1)
//     {
//         printf("%d squar is: %d\n", num, num*num);
//     }
//     else if (option==2)
//     {
//         printf("%d cube is: %d\n", num, num*num*num);
//     }
//     else
//     {
//         printf("please select valid option");
//     }

//     return 0;
// }


#include<stdio.h>   
int main()
{
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c\t ", ch);
    }
    

    return 0;
}

