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
    p=s-c;
    printf("profit price is %d",p);
    printf("Profit percentage is %f",(p/s)*100);
}
