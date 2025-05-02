#include<stdio.h>
int main ()
{
    printf("please enter the following result: \n");

    int c;
    printf("c: ");
    scanf("%d", &c);

    int python;
    printf("Python: ");
    scanf("%d", &python);
    
    int javascript;
    printf("Javascript: ");
    scanf("%d", &javascript);
    
    int react;
    printf("React: ");
    scanf("%d", &react);
    
    int node;
    printf("Node.js: ");
    scanf("%d", &node);

    if (c<70 || python<70 || javascript<70 || react<70 || node<70)
    {
        printf("Fail!!\n");
    }
    else{
        printf("Pass!!\n");
    }
    
    
    return 0;
}