#include <stdio.h>
#include <math.h>
int main()
{
  float z1,z2,a;
  float pi=3.14;
  scanf ("%f", &a);
  z1=(cos(a)+sin(a)+cos(3*a)+sin(3*a));
  z2=(2*sqrt(2)*cos(2)*sin(pi/4+2*a));
  printf("a=%f\n", z1);
  printf("x=%f", z2);
  return 0;
  
}
 
