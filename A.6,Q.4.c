// Author : Vishal Menariya
// Date : 20-11-2022
// Aim : 
// Language : c

// <----code starts---->

#include <stdio.h>

int main()
{
    float a;
    printf("enter distance b/w cities in km\n");
    scanf("%f",&a);
    printf("distance in cm is %f\n",a*100000);
    printf("distance in mm is %f\n",a*1000);
    printf("distance in inches is %f",a*39370.1);
}