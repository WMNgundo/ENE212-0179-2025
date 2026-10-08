#include <stdio.h>
#include <stdlib.h>

int main()
{    double area;
     double l;
     double w;
     //capture input from the user
     printf(" provide width");
     printf("provide length");
     scanf("%lf",&w,&l);
     area= l * w;
     printf("area of the rectangle is %lf",area)

    return 0;
}
