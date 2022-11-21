// Author : Vishal Menariya
// Date : 21-11-2022
// Aim : 
// Language : c

// <----code starts---->

#include <stdio.h>

int main()
{
    int c;
    int s;
    printf("enter cost price of product\n");
    scanf("%d",&c);
    printf("enter sell price of product\n");
    scanf("%d",&s);

    int p;
    printf("profit price is %d",s-c);
    printf("Profit percentage is %d\%",(p/s)*100);
}
