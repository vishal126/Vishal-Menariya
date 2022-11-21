// Author : Vishal Menariya
// Date : 20-11-2022
// Aim : 
// Language : c

// <----code starts---->

#include <stdio.h>
int operation(int,int,int);
int main()
{
    int a;
    int b;
    int c;
    printf("enter first number");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d",&b);
    printf("Please enter your choice from below\n1.sum\n2.difference\n3.prduct\n4.quotient");
    scanf("%d",&c);

    operation(a,b,c);
}

int operation(int a,int b,int c)
{
    if(c=1)
    {
        printf("sum = %d",a+b);
    }
    if(c=2)
    {
        printf("difference = %d",a-b);
    }
    if(c=3)
    {
        printf("product = %d",a*b);
    }
    else
    {
        printf("quotient = %d",a/b);
    }
}