// ++++++++++++++++++++++ Method-1 ++++++++++++++
// #include <stdio.h>

// int main()
// {
//     printf("*      *\n");
//     printf(" *    *\n");
//     printf("  *  *\n");
//     printf("   **\n");
//     return 0; 
// }



// ++++++++++++++++++++++ Method-2 ++++++++++++++

// *      *
//  *    *
//   *  * 
//    **

//     1 - 4 rows
//     2 - landing space inceases row by row (0,1,2,3)
//     3 - print *
//     4 - middle space decreases rwo by row (6,4,2,0)
//     5 - another *.


// #include<stdio.h>
// int main()
// {
//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//        for (int space = 0; space < i; space++)
//        {
//          printf(" ");
//        }
//        printf("*");
//        for (int space = 0; space < 2*(n - i - 1); space++)
//        {
//         printf(" ");
//        }
//        if (i!=n)
//        {
//         printf("*");
//        }
       
//         printf("\n");
//     }
    
    
//     return 0;
// }


// ++++++++++++++++++++++ Method-2 ++++++++++++++

#include<stdio.h>
int main()
{
    int n = 4;   // number of rows for top & bottom part
    
    //top part
    for (int i = 0; i < n; i++)
    {
        for (int s = 0; s < i; s++)
        {
            printf(" ");
        }
        for (int j = i; j < n; j++)
        {
            printf("/");
        }
        for (int j = i; j < n; j++)
        {
            printf("\\");
        }
        
        printf("\n");
    }
    
    printf(" Abhinav");

    for (int i = n; i >=0; i--)
    {
        for (int s = 0; s < i; s++)
        {
            printf(" ");
        }
        for (int j = i; j < n; j++)
        {
            printf("\\");
        }
        for (int j = i; j < n; j++)
        {
            printf("/");
        }
        printf("\n");
        
        
    }
    

    

    return 0;
}




// ++++++++ Another case ++++++++++++
// *      *
//  *    *
//   *  *
//    **
//   *  *
//  *    *
// *      *
// #include <stdio.h>

// int main() {
//     int n = 4; // Half of diamond height

//     // Top Half (same as before)
//     for (int i = 0; i < n; i++) {
//         // Leading spaces
//         for (int space = 0; space < i; space++) {
//             printf(" ");
//         }
//         // First star
//         printf("*");

//         // Middle spaces
//         for (int space = 0; space < 2*(n-i-1); space++) {
//             printf(" ");
//         }
//         // Second star (skip at center)
//         if (i != n) {
//             printf("*");
//         }

//         printf("\n");
//     }

//     // Bottom Half (reverse)
//     for (int i = n-2; i >= 0; i--) {
//         // Leading spaces
//         for (int space = 0; space < i; space++) {
//             printf(" ");
//         }
//         // First star
//         printf("*");

//         // Middle spaces
//         for (int space = 0; space < 2*(n-i-1); space++) {
//             printf(" ");
//         }
//         // Second star
//         printf("*");

//         printf("\n");
//     }

//     return 0;
// }
