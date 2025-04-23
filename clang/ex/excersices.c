//+++++++++++++++++++ Grade +++++++++++++++++++
// #include<stdio.h>
// int main()
// {
//     int result;
//     printf("Please enter result: ");
//     scanf("%d", &result);
//     if (result<=100 && result>=90)
//     {
//         printf("Grade: A\n");
//     }
//     else if (result<=90 && result>=80)
//     {
//         printf("Grade: B\n");
//     }
//     else if (result<=80 && result>=70)
//     {
//         printf("Grade: C\n");
//     }
//     else if (result<=70 && result>=60)
//     {
//         printf("Grade: D\n");
//     }
//     else if (result<=60 && result>=50)
//     {
//         printf("Grade: E\n");
//     }
//     else{
//         printf("Your are fail!!\n");
//     }
    

//     return 0;
// }


// +++++++++++++++++++++++ Imprtant question ++++++++++++++++++++

// #include<stdio.h>
// int main()
// {
//     int a = 10;
//     if (a = 11)
//     {
//         printf("I am 11\n");
//     }
//     else{
//         printf("I am not 11\n");
//     }
    
//     return 0;
// }


// ++++++++++++++++ Tax calculation ++++++++++++++++
//                   Income Slab Tax
//                   2.5 - 5.0L 5%
//                   5.0L - 10.0L 20%
//                   Above 10.0L 30%

// #include<stdio.h>
// int main()
// {
//     int income;
//     float tax = 0;
//     printf("Please enter your income: ");
//     scanf("%d", &income);
//     if (income<=250000) 
//     {
//         tax = 0;
//     }
//     else if (income>250000 && income<=500000)
//     {
//         tax = (income - 250000) * 0.05;
//     }
//     else if (income>500000 && income<=1000000)
//     {
//         tax = (500000 - 250000) * 0.05 + 0.2 * (income - 500000);
//     }
//     else{
//         tax = (500000 - 250000) * 0.05 + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000);
//     }
    
//     printf("the total tax you need to pay %.2f\n", tax);
    
//     return 0; 
// }



//+++++++++++++++ Student pass or fail +++++++++++++

// #include<stdio.h>
// int main()
// {
//     int marks1, marks2, marks3;
//     printf("Enter marks1: \n");
//     scanf("%d", &marks1);
    
//     printf("Enter marks2: \n");
//     scanf("%d", &marks2);
    
//     printf("Enter marks3: \n");
//     scanf("%d", &marks3);

//     if (marks1<33 || marks2<33 || marks3<33)
//     {
//         printf("you are failed due to less marks in individual!!\n");
//     }
//     else if ((marks1+marks2+marks3)/3 <40)
//     {
//         printf("you are fail due to less percentge\n");
//     }
//     else
//     {
//         printf("you are pass!!\n");
//     }    

//     return 0;
// }



// +++++++++ Cal. leap year  ++++++++++

#include<stdio.h>
int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if (year %4==0 && year %100 !=0 || year%400 ==0)
    {
        printf("This is a leap year\n");
    }
    else
    {
        printf("This is not a leap year\n");
    }
    
    
    return 0;
}


// #include<stdio.h>   
// int main()
// {
//     char ch;

//     for (ch = 'a'; ch <= 'z'; ch++)
//     {
//         printf("%c\t ", ch);
//     }
    

//     return 0;
// }

