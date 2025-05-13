#include<stdio.h>
int main ()
{
    int number;
    printf("Please enter any number between 1-10: ");
    scanf("%d", &number);

    for (int i = 1; i <=10; i++)
    {
        if (number==i)
        {
            printf("match\n");
            break;
        }
        else
        {
            printf("not match\n");
            
        }
        
        
    }
    
    return 0;
}