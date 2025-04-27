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

// #include <stdio.h>

// int main() {
//     int n = 4; 

//     for (int i = 0; i < n; i++) {
        
//         for (int j = 0; j < i; j++) {
//             printf(" ");
//         }

//         printf("*");

//         for (int j = 0; j < (2 * (n - i - 1)); j++) {            // 2*(4 - 0 - 1) = 6   if i increase space decrease 
//             printf(" ");
//         }

        
//         if (i != n) {
//             printf("*");
//         }

//         printf("\n");
//     }

//     return 0;
// }



// ++++++++++++++++++++++ Method-2 ++++++++++++++

#include<stdio.h>
int main()
{
    int x = printf("hello");
    printf("%d", x);
    return 0;
}