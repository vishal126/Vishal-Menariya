// Author : Vishal Menariya
// Date : 20-11-2022
// Aim : 
// Language : c

// <----code starts---->

#include <stdio.h>

int main()
{
  // for rectangle
  int l=10;
  int b=5;

  printf("area of rectangle %d\n",l*b);
  printf("perimeter of square %d\n",4*(l+b));

  // for square

  int s=4;

  printf("area of square %d\n",s*s);
  printf("perimeter of square %d\n",4*s);

  //for circle

  float r=5;

  printf("area of circle %f\n",3.14*r*r);
  printf("circumference of circle %f\n",2*3.14*r);

  //for triangle

  int a=1;
  int d=2;
  int c=3;  

  printf("sum of side of triangle %d\n",a+d+c);
}