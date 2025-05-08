




// //******** get 5 input from user and arrange them into ascending oder ******

// #include<stdio.h>
// int main()
// {
//     int number[5];
//     int input;

//     printf("Please enter any five number: ");
//     for (int i = 0; i < 5; i++)
//     {
//      scanf("%d", &number[i]);
//     }

//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4-i; j++)
//         {
            
//         }
        
//     }
    
    

//     return 0;
// }




#include <stdio.h>

int main() {
    int number[5];

    // Get 5 inputs from user
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &number[i]);
    }

    // Sort in ascending order using bubble sort
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (number[j] > number[j + 1]) {
                // Swap values
                int temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
            }
        }
    }

    // Display sorted numbers
    printf("\nNumbers in ascending order:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", number[i]);
    }

    return 0;
}
