// Author : Vishal Menariya
// Date : 20-11-2022
// Aim : 
// Language : c

// <----code starts---->

#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    int b;
    int c;
    printf("please enter value of a,b and c of a quadratic equation\n");
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    printf("c = ");
    scanf("%d",&c);
    printf("Your Quadratic equation is %dx^2+%dx+%d\n",a,b,c);

    float d;
    d = sqrt((b*b)-4*a*c);
    printf("d=%f\n",d);
    
    float e;
    e = (-(b)+(d))/(2*a);
    printf("e = %f\n",e);
    
    float f;
    f = ((-b)-(d))/(2*a);
    printf("f = %f\n",f);
}