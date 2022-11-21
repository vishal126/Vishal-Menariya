// Author : Vishal Menariya
// Date : 21-11-2022
// Aim : 
// Language : c

// <----code starts---->

#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    printf("enter first side of triangle\n");
    scanf("%d",&a);
    printf("enter second side of triangle\n");
    scanf("%d",&b);
    printf("enter third side of triangle\n");
    scanf("%d",&c);

    if(a+b>c)
    {
        printf("triangle is valid");
    }
    else
    {
        printf("triangle is not valid");
    }
}
