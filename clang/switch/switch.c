#include<stdio.h>
int main()
{
    int a;
    printf("Please enter a number between 1-4: ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("you enterd 1\n");
        break;
    case 2:
        printf("you enterd 2\n");
        break;
    case 3:
        printf("you enterd 3\n");
        break;
    case 4:
        printf("you enterd 4\n");
        break;
    
    default:
        printf("nothing match\n");
        break;
    }
    return 0;
}