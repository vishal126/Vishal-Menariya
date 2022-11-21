// Author : Vishal Menariya
// Date : 20-11-2022
// Aim : 
// Language : c

// <----code starts---->

#include <stdio.h>

int main()
{
    int a;
    printf("enter a no.\n");
    scanf("%d",&a);

    if(a<10)
    {
        printf("entered no. is less than 10");
    }
    else if(a>10)
    {
        printf("entered no. is greater than 10");
    }
    else
    {
        printf("entered no. is 10");
    }
}