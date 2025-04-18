
//++++++++++++ Ques-  3*x/y – z+k, where x=2, y=3, z=3, k=1 +++++++++++

// #include<stdio.h>
// int main()
// {
//     int x = 2;
//     int y = 3;
//     int z = 3;
//     int k = 1;

//     float cal = (3.0 * x / y)- (z+k);
//     printf("total = %f/n", cal);
//     return 0;
// }



// +++++++++++++ Use of scanf +++++++++++++++

// #include<stdio.h>
// int main()
// {
//     int myNum;
//     char myChar[200];

//     printf("enter one number & character\n");

//     scanf("%d %s", &myNum, &myChar);
//     printf("your number is %d\n", myNum);
//     printf("your character is %s\n", myChar);
//     return 0;
// }


// ++++++++++ use of if/else ++++++++++++
#include<stdio.h>
int main (){

    int age;
    printf("please enter your age ");
    scanf("%d", &age);

    if (age>18)
    {
        printf("your are eligible %d\n", age);
    }
    else
    {
        printf("you are not eligible\n");
    };

    return 0;
} 


