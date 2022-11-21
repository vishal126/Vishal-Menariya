// Author : Vishal Menariya
// Date : 20-11-2022
// Aim : 
// Language : c

// <----code starts---->

#include <stdio.h>

int main()
{
    natural();
    
}

int natural()
{
    int a;
    int b;
    a=1;
    printf("enter a number till you want to print number\n");
    scanf("%d",&b);
    while(a<=b)
    {
        printf("%d,",a);
        a=a+1;
    }
}