#include<stdio.h>
int main()
{
    int num[] = {23, 44, 55, 33, 76, 88, 18, 55};

    int length = sizeof(num)/sizeof(num[0]);
    
    int lowestNum = num[0];

    for (int i = 0; i < length; i++)
    {
        if (lowestNum>num[i])
        {
            lowestNum = num[i];
        }
        
    }
    printf("The lowest number = %d\n", lowestNum);
    
    return 0;
}