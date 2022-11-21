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

    if(a%2 == 0)
    {
        printf("entered no. is even");
    }
    else
    {
        printf("entered no. is odd");
    }
}