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

//     if (num>0 && num<100)
//     {
//         if (num%2==0)
//         {
//             printf("Your numbe is even number: %d", num);
            
//         }
//         else
//         {
//             printf("Your number is odd: %d", num);
//         }
        
//     }

//     return 0;
// }



//+++++++++++ Squar & Cube +++++++++++++++

// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("1 for squar: \n");
//     printf("2 for cube: \n");
//     int option;
//     printf("Please select any option: ");
//     scanf("%d",&option);

//     if (option>0 && option<3)               //++++++ Important ++++++++++
//     {
//     printf("pleas enter any number: ");
//     scanf("%d",&num);
//     }

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
//         printf("please select valid option!!\n");
//     }

//     return 0;
// }



// +++++++++++++++ ASCII values  +++++++++++++++++

// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number between 97-122: ");
//     scanf("%d", &num);

//     printf("the number which is %d is ASCII value of '%c'\n", num, num);

//     return 0;
// }


// hindi, english, math = marks 
// 1st division = >60 
// 2nd division = >45, <60
// 3rd division = >33, <45
// sole this using switch case 


#include<stdio.h>
int main()
{

    int english;
    printf("Enter English marks: \n");
    scanf("%d", &english);
    
    int hindi;
    printf("Enter Hindi marks: \n");
    scanf("%d", &hindi);

    int math;
    printf("Enter Math marks: \n");
    scanf("%d", &math);

    int sum = english + hindi + math;
    printf("total = %d\n", sum);

    int average = sum/3;
    printf("Average: %d\n", average);

    // if (average >= 65) 
    // {
    //     printf("1st Division!!\n");
    // }
    // else if (average >= 45) {
    //     printf("2nd Division.\n");
    // }
    // else if (average >= 33) {
    //     printf("3rd Division.\n");
    // }
    // else {
    //     printf("Fail.\n");
    // }
    
    // switch (average/10)
    // {
    // case 10:
    // case 9 :
    // case 8 :
    // case 7 :
    // case 6 :
    //     printf("1st division");
    //     break;
    // case 5 :
    //     printf("2nd division");
    //     break;
    // case 4 :
    // case 3 :
    //     printf("3rd division");
    // break;
    // default:
    //     printf("You are fail!!");
    //     break;
    // }

    if (average>=60)
    {
        switch (average/10)
    {
    case 10:
    case 9 :
    case 8 :
    case 7 :
    case 6 :
        printf("1st division");
        break;
    }
    }
    else if (average >= 45 && average<60) {
        printf("2nd Division.\n");
    }
    else if (average >= 33 && average<45) {
        printf("3rd Division.\n");
    }
    else {
        printf("Fail!!\n");
    }
    

    return 0;
}


