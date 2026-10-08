#include <stdio.h>
#include <stdlib.h>

int main()
{
  double area ;
  const double pi = 3.1422;
  double r;
  //capture input from user
  printf("provide radius");
  scanf("%lf",& r);
  area = pi * r *r ;
  printf ("area of circle is %lf ",area);
  return 0;
}
