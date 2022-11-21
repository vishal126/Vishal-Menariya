// Author : Vishal Menariya
// Date : 20-11-2022
// Aim : 
// Language : c

// <----code starts---->

#include <stdio.h>

int main()
{
    float h;
    float e;
    float p;
    float c;
    float m;
    printf("enter marks obtained in hindi\n");
    scanf("%f",&h);
    printf("enter marks obtained in english\n");
    scanf("%f",&e);
    printf("enter marks obtained in physics\n");
    scanf("%f",&p);
    printf("enter marks obtained in chemistry\n");
    scanf("%f",&c);
    printf("enter marks obtained in maths\n");
    scanf("%f",&m);
    printf("Total Marks obtained %f\n",h+e+p+c+m);
    printf("Percentage Obtained = %f\n",(h+e+p+c+m)/500*100);
    printf("Average Marks %f\n",(h+e+p+c+m)/5);
}