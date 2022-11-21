// Author : Vishal Menariya
// Date : 20-11-2022
// Aim : 
// Language : c

// <----code starts---->

#include <stdio.h>
int greater(int,int);
int main()
{
    int a;
    int b;
    printf("enter first number\n");
    scanf("%d",&a);
    printf("enter second number\n");
    scanf("%d",&b);
    greater(a,b);
}

int greater(int a,int b)
{
    if(a>b)
    {
        printf("%d",a);
    }
    else
    {
        printf("greater no. is %d",b);
    }
}