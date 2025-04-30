// #include <stdio.h>

// int main()
// {
//     int pincod = 124001;
//     int pin;
//     do
//     {
//         printf("Please enter Pin code number: ");
//         scanf("%d", &pin);
//     } while (pin != pincod);
    
//     return 0; 
// }



// #include <stdio.h>

// int main()
// {
//     char ch;
//     int flag = 1;
//     do
//     {
//        printf("Please enter any character: ");
//        scanf(" %c", &ch);
//        switch (ch)
//        {
//        case 'a':
//        case 'e':
//        case 'i':
//        case 'o':
//        case 'u':
//         printf("you enter vowel!!\n");
//         flag = 0;           
//         break;
       
//        default:
//        printf("Not a vowels try again...\n");
//         break;
//        }
//     } while (flag);
    
//     return 0; 
// }

// #include <stdio.h>

// int main()
// {
//     char ch;
//     int flag = 1;
//     do
//     {
//        printf("Please enter any character: ");
//        scanf(" %c", &ch);
//        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//        {
//         printf("you enter vowel!!\n");
//         flag = 0;
//         break;
//        }else
//        {
//         printf("please try again...\n");
//        }
       
       
        
//     } while (flag);
    
//     return 0; 
// }


#include <stdio.h>

int main()
{
    char ch;
    int flag = 1;
    do
    {
       printf("Please enter any character: ");
       scanf(" %c", &ch);
       if (ch == 'a')
       {
        printf("you enter vowel!!\n");
        flag = 0;
        break;
       }
       else if (ch == 'e')
       {
        printf("you enter vowel!!\n");
        flag = 0;
        break;
       }
       else if (ch == 'i')
       {
        printf("you enter vowel!!\n");
        flag = 0;
        break;
       }
       else if (ch == 'o')
       {
        printf("you enter vowel!!\n");
        flag = 0;
        break;
       }
       else if (ch == 'u')
       {
        printf("you enter vowel!!\n");
        flag = 0;
        break;
       }
       
       else
       {
        printf("please try again...\n");
       }
       
       
        
    } while (flag);
    
    return 0; 
}

