// Author : Vishal Menariya
// Date : 20-11-2022
// Aim : 
// Language : c

// <----code starts---->

#include <stdio.h>

int main()
{
    int a;
    printf("enter a no. b\n 1-100\n");
    scanf("%d",&a);
    
    if(a>100)
    {
        printf("please enter no. b\n 1-100");
    }
    if(a<1)
    {
        printf("please enter no. b\n 1-100");
    }
    if(a>50 && a<100)
    {
        printf("SUCCESS");
    }
    else if(a<=50 && a>=1)
    {
        printf("FAIL");
    }
}